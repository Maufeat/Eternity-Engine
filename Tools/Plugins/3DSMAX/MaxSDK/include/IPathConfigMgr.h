/*
*		IPathConfigMgr.h - Public interface for modifying application paths.
*
*			Copyright � Autodesk, Inc, 2005.  David Cunningham.
*
*/

#ifndef IPATHCONFIG_H
#define IPATHCONFIG_H

#include "iFnPub.h"
#include "Path.h"

#define PATHCONFIG_INTERFACE   Interface_ID(0x490ddc99, 0xbe8dc96)
//! \brief Provides access to application path configuration functionality.
//! Note that the terms "map paths" and "External Files" (as seen in the UI) are
//! used interchangeably below.
//! This class provides access to all exposed path configuration functionality,
//! including loading and saving of path configuration files.  Should be used
//! in lieu of Interface for path-related operations.
//!
//! To access the single IPathConfigMgr instance, call the static function 
//! IPathConfigMgr::GetPathConfigMgr().
class IPathConfigMgr : public FPStaticInterface
{
public:

	//! \brief Loads a path configuration file.

	//! Loads a path configuration file and returns true if paths are loaded
	//! successfully.
	//! \pre file passed to function is a path configuration file
	//! \post Paths found in file are loaded into application persistently.
	//! \param[in] filename The fully-qualified path of the file to be loaded.
	//! \return true if any paths are loaded
	virtual bool LoadPathConfiguration(const TCHAR* filename) = 0;
	//! \brief Merges a path configuration file.

	//! Merges a path configuration file and returns true if paths are merged
	//! successfully.  A merge differs from a load in that map, xref and plugin
	//! directories are appended to the list instead of the list being overwritten.
	//! File IO paths are simply overwritten, as is the case with load.
	//! \pre file passed to function is a path configuration file
	//! \post Paths found in file are loaded into application persistently.
	//! \param[in] filename The fully-qualified path of the file to be loaded.
	//! \return true if any paths are loaded
	virtual bool MergePathConfiguration(const TCHAR* filename) = 0;
	//! \brief Saves out the current path configuration to the specified file.

	//! \pre Specified path is valid and writable.
	//! \post The current user path configuration is saved to the specified file.
	//! \param[in] filename The fully-qualified path of the file to which paths are saved.
	//! \return true if file is successfully saved out
	virtual bool SavePathConfiguration(const TCHAR* filename) = 0;

	//! \brief Returns the default directory for the specified ID.

	//! \param[in] which APP_XXX_DIR directory ID
	//! \return the default directory
	//!	\see MAXDirIDs "MAX Directory IDs"
	virtual const TCHAR *GetDir(int which) const =0;		
	//! \brief Sets the default directory.

	//! \param[in] which The index of the directory to set.
	//! \param[in] dir The new default directory.
	//! \return true if the directory is set and valid
	//!	\see MAXDirIDs "MAX Directory IDs"
	virtual bool SetDir(int which, const TCHAR *dir) = 0;

	//! \brief Returns the number of plugin path entries in PLUGIN.INI.
	//!
	//! \return the number of plugin path entries.
	virtual int	GetPlugInEntryCount() const =0;	

	//! \brief Returns the description string for the given entry number.
	//!
	//! \param[in] i entry number
	//! \return the ith description string
	virtual const TCHAR *GetPlugInDesc(int i) const =0;
	//! \brief Returns the directory string for the given entry number.

	//! \param[in] i entry number
	//! \return the ith directory string
	virtual const TCHAR *GetPlugInDir(int i) const =0;	

	// bitmap path
	//! \brief Returns the number of map / xref directories in path.

	//! \param[in] xref specifies which type of count looking for ( xref = false / map = true)
	//! \return number of dirs in path
	virtual int GetMapDirCount(bool xref) const =0;		

	//! \brief Returns the ith bitmap / xref directory in path.

	//! \param[in] i index of path to get
	//! \param[in] xref specifies the directory category from which to get the directory.
	//! If true, the directory should be retrieved from among the xref directories,
	//! otherwise from the map directories.
	//! \return the ith bitmap / xref directory in path
	virtual const TCHAR *GetMapDir(int i, bool xref) const =0;		

	//! \brief Adds a map / xref path to the list.

	//! \param[in] dir directory to add
	//! \param[in] xref specifies the directory category to which the new directory 
	//! should be added. If true, the new directory should be added to the xref directories,
	//! otherwise to the map directories
	//! \return true if added successfully
	virtual bool AddMapDir(const TCHAR *dir, bool xref)=0;

	//! \brief Adds a map / xref path to the list.

	//! \param[in] dir directory to add
	//! \param[in] update Should the scene be updated after the add?
	//! \param[in] xref specifies the directory category to which the new directory 
	//! should be added. If true, the new directory should be added to the xref directories,
	//! otherwise to the map directories
	virtual bool AddMapDir(const TCHAR *dir, int update, bool xref) = 0;	

	//! \brief Deletes a map / xref path

	//! Deletes a map / xref path from the path list. 
	//! \param[in] i Directory to delete.
	//! \param[in] update Should the scene be updated with the new path?
	//! \param[in] xref Is this an xref path or a bitmap path?
	//! \return true if Deletes successfully
	virtual bool DeleteMapDir(int i, int update, bool xref) = 0;

	//! \brief Resolves a given path using a predefined path search order.
	/*! This method should be used by plugins to search for an auxiliary file (asset).
	The file is searched for in the following locations, in the order specified below:
	\li The full UNC path and filename specified as the first parameter.
	\li The directory where the current 3ds max file was loaded from.
	\li The map or xref search path.  If filepath is a partial or relative path, then the 
	path is appended to each search path.  In other words, the filename by itself is not searched 
	in the search path.
	\li The directory tree under the directory where the current 3ds max file was loaded from.
	\param [in] filePath Full or partial file path to be used to find a file.
	The filePath must contain at least a file name and extension. The filePath 
	can be a full or relative path. UNC paths are supported. 
	\param [in] xref Specifies which category of search directories should be used.
	If true, xref search directories are used, otherwise map search directories.
	\return The full file path if it was found or the empty string if it wasn't.
	\remarks This method will return a UNC path name if the option controlling this is turned on. 
	*/
	virtual TSTR GetFullFilePath(const TCHAR* filePath, bool xref) const =0;

	//! \brief Adds a session path

	//! Adds a session path to the path list.  Session paths are not persistent, meaning
	//! they are lost when the application shuts down.
	//! \param[in] dir Directory to add.
	//! \param[in] update Should the scene be updated with the new path?
	//! \param[in] xref Is this an xref path or a bitmap path?
	//! \return true if added successfully
	virtual bool AddSessionMapDir(const TCHAR *dir, int update, bool xref)=0;
	
	//! \brief Returns the number of bitmap / xref session directories in path.

	//! \param[in] xref specifies which type of count looking for ( xref = false / map = true)
	//! \return number of session dirs in path
	virtual int GetSessionMapDirCount(bool xref) const =0;
	
	//! \brief Returns the ith bitmap / xref session directory in path.

	//! \param[in] i index of path to get
	//! \param[in] xref specifies which type of count looking for ( xref = false / map = true)
	//! \return the ith bitmap / xref session directory in path
	virtual const TCHAR *GetSessionMapDir(int i, bool xref) const =0;
	
	//! \brief Deletes a session path

	//! Deletes a session path to the path list.  Session paths are not persistent, meaning
	//! they are lost when the application shuts down.
	//! \param[in] i Index for the directory to delete.
	//! \param[in] update Should the scene be updated with the new path?
	//! \param[in] xref Is this an xref path or a bitmap path?
	//! \return true if Deletes successfully
	virtual bool DeleteSessionMapDir(int i, int update, bool xref)=0;

	//! \brief Gets the combined total of session and permanent paths.

	//! These methods provide access to the combined list of permanent and temporary (session) map dirs,
	//! therefore the current total set of map directories
	//! \param[in] xref specifies which type of count looking for ( xref = false / map = true)
	//! \return the combined total of session and permanent paths
	virtual int GetCurMapDirCount(bool xref) const =0;
	
	//! \brief Gets the ith map directory.

	//! Gets ith directory.  Session paths are enumerated before permanent paths.
	//! \param[in] i index to return
	//! \param[in] xref specifies which type of count looking for ( xref = false / map = true)
	//! \return the ith directory
	virtual const TCHAR *GetCurMapDir(int i, bool xref) const =0;
	
	//! \brief Forces an update on the application.

	//! Forces the application to update itself with the currently
	//! set path.
	//! \param[in] xref Update maps or xrefs?
	virtual void UpdateMapSection(bool xref) = 0;

	//! \brief Returns the name of the .ini file used by max.

	//! \return The name of the .ini file
	//! Returns empty TSTR if locType == LOC_REGISTRY.
	virtual TSTR GetMAXIniFile() const = 0; 

	//! \brief Returns the Preferences --> Files [Convert networked file paths to UNC] property

	//! If this method returns true, then paths will automatically be 
	//! converted to their UNC representation if the path originates from
	//! a mapped drive.
	//! \return If paths are automatically resolved to their UNC equivalents
	virtual bool GetResolveUNC() const = 0;
	
	//! \brief Sets the Preferences --> Files [Convert networked file paths to UNC] property

	//! If this flag is set to true, then paths will automatically be 
	//! converted to their UNC representation if the path originates from
	//! a mapped drive.
	//! \param[in] aFlag If paths should automatically be resolved to their UNC equivalents
	virtual void SetResolveUNC(bool aFlag) = 0;

	//! \brief Returns the Preferences --> Files [Convert local file paths to Relative] property
	/*! If this method returns true, then paths selected as assets will automatically be
		converted to their relative equivalents, made relative to the current Project Folder setting.
		\see GetCurrentProjectFolder()
		\return true if asset paths should be made relative
	 */
	virtual bool GetResolveToRelative() const = 0;
	
	//! \brief Sets the Preferences --> Files [Convert local file paths to Relative] property
	/*! If this flag is set to true, then paths selected as assets will automatically be
		converted to their relative equivalents, made relative to the current Project Folder setting.
		\see SetCurrentProjectFolder(const MaxSDK::Util::Path& )
		\param[in] aFlag if asset paths should be made relative
	*/
	virtual void SetResolveToRelative(bool aFlag) = 0;

	//! \brief This function appends a slash character to the end of the path passed unless one already exists. 
	//! \param[in,out] path: The path name to append. If NULL, no operation.
	virtual void AppendSlash ( TCHAR *path ) const = 0;

	//! \brief This function removes the slash character from the end of the path passed if present. 
	//! \param[in,out] path: The path name to append. If NULL, no operation.
	virtual void RemoveSlash ( TCHAR *path ) const = 0;

	//! \brief This function appends a slash character to the end of the path passed unless one already exists. 
	//! \param[in,out] path: The path name to append.
	virtual void AppendSlash ( TSTR &path ) const = 0;

	//! \brief This function removes the slash character from the end of the path passed if present. 
	//! \param[in,out] path: The path name to append. If NULL, no operation.
	virtual void RemoveSlash ( TSTR &path ) const = 0;

	//! \brief Checks whether the application is configured to use User Profile directories.
	//! \return true if the application is configured to use User Profile directories
	//! false if the application's system paths and configuration files are stored in the
	//! legacy location (i.e.  under the install root)
	virtual bool IsUsingProfileDirectories() const = 0;

	//! \brief Checks whether the application is configured to use roaming profiles.
	//! Assuming that the application is configured to use User Profiles (see IsUsingProfileDirectories())
	//! , determines whether paths are set to store information in the roaming profile location
	//! (i.e. /Documents and Data/\<username>/Application Data...) or whether they are stored in the per-user
	//! Local Settings for the machine.
	//! (i.e. /Documents and Data/\<username>/Local Settings/Application Data...)
	//! \return true if the application is configured to use roaming profiles (moot if IsUsingProfileDirectory()
	//! returns true
	virtual bool IsUsingRoamingProfiles() const = 0;

	//! \brief Returns the current Project Folder folder.
	/*!
		Gets the current Project Folder setting in max.  This is the setting to which newly
		created relative paths are set relative to.  
		Though this setting is also accessible by calling 
		\code
		IPathConfigMgr::GetPathConfigMgr()->GetDir(APP_PROJECT_FOLDER_DIR)
		\endcode
		it is highly recommended that this method be used to access this value.
		\return The current Project Folder setting folder.
	 */
	virtual const MaxSDK::Util::Path& GetCurrentProjectFolder() const = 0;
	
	//! \brief Sets the current Project Folder folder.
	/*!
		Sets the current Project Folder setting in max.  This is the setting to which newly
		created relative paths are set relative to.  This method will also create a Project workspace
		environment, if the user desires.  The user is prompted via a pop-up dialog (if QuietMode is off.)
		Though this setting can also be set by calling 
		\code
		IPathConfigMgr::GetPathConfigMgr()->SetDir(APP_PROJECT_FOLDER_DIR)
		\endcode
		it
		is highly recommended that this method be used to change this value, as other steps to adjust
		the environment may be taken internally.
		\param[in] aDirectory The folder to which the Project Folder should be set.  This value must be
		an absolute path.  If the folder path does not exist, max will attempt to create it.
		\return Returns true if the folder is valid and absolute, or false otherwise
		Note:  If the application cannot automatically create the sub-folders under this directory, this 
		function will still return true as long as the directory setting is valid.
	*/
	virtual bool SetCurrentProjectFolder(const MaxSDK::Util::Path& aDirectory) = 0;

	//! \brief Sets a Project Folder which will be used for this application
	//! session only.
	/*!
		Sets a session-only path as the current Project Folder.  This value
		does not persist if the application is shut down.  The previous Project Folder
		setting will not be overwritten and will be the default setting
		upon future boot-ups.  
		Calls to GetCurrentProjectFolder() will resolve to this session Project 
		Folder, and relative paths will resolve themselves relative to this 
		new value.  The only difference is that this value is not persistent 
		across sessions.
		\param[in] aDirectory The folder to which the Project Folder should be set.  This value must be
		an absolute path.  If the folder path does not exist, max will attempt to create it.
		\return Returns true if the folder is valid and absolute, or false otherwise
		\see SetCurrentProjectFolder(const MaxSDK::Util::Path&)
	 */
	virtual bool SetSessionProjectFolder(const MaxSDK::Util::Path& aDirectory) = 0;

	//! \brief Initiates the steps to choose and setup a max project.
	/*! This call will initiate the workflow for allowing a user to choose 
		and create a project.  In effect, this method will launch the
		"SetProjectFolder" macroscript.  The user will be prompted to browse
		to a new directory.
		\return true if the steps succeeded and the user did not cancel the action
		Will return false immediately if the app is in Quiet Mode.
	 */
	virtual bool DoProjectSetupSteps() const = 0;
	
	//! \brief Initiates the steps to choose and setup a max project without prompting the user.
	/*! This call will initiate the workflow for allowing a user to choose 
		and create a project.  In effect, this method will launch the
		"SetProjectFolder" macroscript.  It will use the passed in parameter as
		the new Project Folder.
		\param[in] aDirectory The directory that will be the new root of the project.
		This path must be absolute.
		\return true if the steps succeeded and the path is absolute
	*/
	virtual bool DoProjectSetupStepsUsingDirectory(const MaxSDK::Util::Path& aDirectory) const = 0;

	//! Will check for the existence of a project in a folder
	/*!
		Given a folder path, will check if a project exists in that folder.
		A project exists if a .mxp file exists in that path.
		\param[in] aDirectoryToCheck An absolute path to check for the existence of a project.
		\return true if a project exists at the location specified by the passed
		-in parameter
	 */
	virtual bool IsProjectFolder(const MaxSDK::Util::Path& aDirectoryToCheck) const = 0;
	
	//! \brief Will return the fully-qualified path of the project file, given the root
	//! folder of an existing project.
	/*!
		Given a project root of a project which exists, will return the .mxp file
		for that project.  Normally the .mxp filename is the same name as the project
		root folder, but if that file does not exist, then the first file that matches
		the "*.mxp" pattern will be returned.
		\param[in] aProjectRoot The path of the root of a project to check.
		\return The fully-qualified path of the project file.  A project file is 
		searched for, but if not found, then a file name is generated.
	*/
	virtual MaxSDK::Util::Path GetProjectFolderPath(const MaxSDK::Util::Path& aProjectRoot) const = 0;

	//! \brief Returns the file path of the current project file, if it exists
	/*!
		Gets the project file path of the current project, if it exists.  
		\see GetProjectFilePath(const MaxSDK::Util::Path&) const
		\return The fully-qualified path of the current project file.  A project file is 
		searched for, but if not found, then a file name is generated.
	 */
	virtual MaxSDK::Util::Path GetCurrentProjectFolderPath() const = 0;

	//! \brief Converts an absolute path into a path that is relative to the current Project Folder.
	/*! Converts an absolute path into a path that is relative to the current Project Folder.
		If the path cannot be made relative (if it is rooted on a different drive, for instance), then
		it is left untouched.  A path parameter which already relative is also left untouched.
		\param[in, out] aPath A mutable absolute Path which will be converted to a relative path, 
		if possible.
		\see MaxSDK::Util::Path
		\see GetCurrentProjectFolder()
	 */
	virtual void MakePathRelativeToProjectFolder(MaxSDK::Util::Path& aPath) const = 0;
	
	//! \brief Creates a hierarchy of directories.
	/*! This method will ensure that a hierarchy of directories exists.  For example,
		if Path object representing "C:/A/B/C/D" is passed to this method, then this
		method will create A, B, C, and D, if they do not exist.  
		\param[in] aPath A Path object representing the directory hierarchy to create, if needed.
		This path must be absolute, and it's length cannot exceed 249 characters.
		\return true if the directories are created successfully or if the path already
		exists, false if an error occured while creating the directory, or if the parameter
		does not conform to stated restrictions.
		\see MaxSDK::Util::Path
	 */
	virtual bool CreateDirectoryHierarchy(const MaxSDK::Util::Path& aPath) const = 0;
	
	//! \brief Checks if a file or directory exists in the location pointed to by the absolute path parameter.
	/*! Checks for the existence of a file or directory pointed to by the absolute Path parameter.
		\param[in] aPath An absolute path to check for existence.  Note that the disk is accessed to check for
		its existence, so checking paths (especially on network drives) may incur a performance cost.
		\return true if the path is absolute and points to a file or directory that currently exists
	 */
	virtual bool DoesFileExist(const MaxSDK::Util::Path& aPath) const = 0;
	
	//! \brief Resolves a given path using a predefined path search order for external files.
	/*! This method should be used by plugins to search for an auxiliary file, or asset.
		The file is searched for in the following locations, in the order specified below:
		\li If the path is absolute: The full UNC path and filename specified as the first parameter.
		\li If the path is relative: The resolved absolute path, relative to the current max Project Folder.
		\li The directory where the current 3ds max file was loaded from.
		\li The external file search path.  If filepath is a partial or relative path, then the 
		path is appended to each search path.  In other words, the filename by itself is not searched 
		in the search path.
		\li The directory tree under the directory where the current 3ds max file was loaded from.
		\param [in, out] aPathToFind Full or partial file path to be used to find a file.
		The parameter must be a valid Path object and contain at least a file name and extension. 
		The parameter can be a full or relative path. UNC paths are supported. 
		If the path is resolved to a given location, then this Path is mutated to that location, or
		left as is, if the Path was already pointing to the correct file location.
		\return true if the path was resolved, false if not
		\remarks This method will return a UNC path name if the option controlling this is turned on. 
	*/
	virtual bool SearchForExternalFiles(MaxSDK::Util::Path& aPathToFind) const = 0;
	
	//! \brief Resolves a given path using a predefined path search order for xref-ed files.
		/*! This method should be used by plugins to search for an xref-ed file.
		The file is searched for in the following locations, in the order specified below:
		\li If the path is absolute: The full UNC path and filename specified as the first parameter.
		\li If the path is relative: The resolved absolute path, relative to the current max Project Folder.
		\li The directory where the current 3ds max file was loaded from.
		\li The xref search path.  If filepath is a partial or relative path, then the 
		path is appended to each search path.  In other words, the filename by itself is not searched 
		in the search path.
		\li The directory tree under the directory where the current 3ds max file was loaded from.
		\param [in, out] aPathToFind Full or partial file path to be used to find a file.
		The parameter must be a valid Path object and contain at least a file name and extension. 
		The parameter can be a full or relative path. UNC paths are supported. 
		If the path is resolved to a given location, then this Path is mutated to that location, or
		left as is, if the Path was already pointing to the correct file location.
		\return true if the path was resolved, false if not
		\remarks This method will return a UNC path name if the option controlling this is turned on. 
	*/
	virtual bool SearchForXRefs(MaxSDK::Util::Path& aPathToFind) const = 0;

	//! \brief Will Normalize this absolute path according to the current application settings.
	/*! Normalizes the passed-in path according to current application settings.
		The passed in path must be absolute to be normalized.  Relative paths are ignored.
		Currently, the path will be normalized according to the two settings in the
		application that determine whether a path should automatically be converted to 
		to a path relative to the current application Project Folder, and, if not, whether the 
		absolute path should be converted to its UNC equivalent.
		\param[in, out] aPath The path to normalize
		\see GetResolveToUNC()
		\see GetResolveToRelative()
	 */
	virtual void NormalizePathAccordingToSettings(MaxSDK::Util::Path& aPath) const = 0;

	//! \brief Searches for the given path and records the path in the NameEnum
	//! according to its ability to resolve the path and if missing only is set 
	//! in the flags.
	/*! Calls SearchForExternalFiles on the specified path, and if the path
	 *  resolves to an existing file, and FILE_ENUM_MISSING_ONLY is not set,
	 *  records the asset in the NameEnumCallback.  If the path is not resolved
	 *  and the flags are set with FILE_ENUM_MISSING_ONLY, it records the 
	 *  original path in the callback.
	 *  
	 *  This is intended to be the default asset registration policy for calls to
	 *  EnumAuxFiles on input-only assets when not using IAssetAccessor.
	 *  
	 *  \param originalPath The asset path as listed in the asset tracking system.
	 *  \param nameEnum The NameEnumCallback in which to register this asset.
	 *  \param flags If FILE_ENUM_MISSING_ONLY is set, only paths that cannot
	 *     be resolved to existing files will be recorded.  If the 
	 *  	 FILE_ENUM_MISSING_ONLY is not set, only found files will be recorded.
	 */ 
	virtual void RecordInputAsset(
		const MaxSDK::Util::Path &originalPath,
		NameEnumCallback &nameEnum, 
		DWORD flags) const = 0;

	//! \brief Converts the given path to absolute and records the path in the 
	//! NameEnum according to its ability to resolve the path and if missing only 
	//! is set in the flags.
	/*! Calls Path.ConvertToAbsolute on the specified path, and if the path
	 *  resolves to an existing file, and FILE_ENUM_MISSING_ONLY is not set,
	 *  records the asset in the NameEnumCallback.  If the path is not resolved
	 *  and the flags are set with FILE_ENUM_MISSING_ONLY, it records the 
	 *  original path in the callback.
	 *  
	 *  This is intended to be the default  asset registration policy for calls 
	 *  to EnumAuxFiles for write assets when not using IAssetAccessor.
	 *
	 *  \param originalPath The asset path as listed in the asset tracking system.
	 *  \param nameEnum The NameEnumCallback in which to register this asset.
	 *  \param flags If FILE_ENUM_MISSING_ONLY is set, only paths that cannot
	 *  be resolved to existing files will be recorded.  If the 
	 *  FILE_ENUM_MISSING_ONLY is not set, only found files will be recorded.
	 */ 
	virtual void RecordOutputAsset(
		const MaxSDK::Util::Path &originalPath,
		NameEnumCallback &nameEnum, 
		DWORD flags) const = 0;

	//! \brief Gets a count of the number of Project directories
	/*! This method will return a count of the directories listed in the Configure
		User Paths... -> File IO dialog.
		\return the number of Project directories
	 */
	virtual int GetProjectSubDirectoryCount() const = 0;
	
	//! \brief Returns a project directory according to an index, not an ID
	/*! This method will return a Project directory by index, rather than
		by ID.  This is to allow an SDK user to iterate over the list of
		Project directories.  The directories are sorted by Description and 
		are ordered alphanumerically.
		\param[in] aIndex The index value of the directory to return, which
		must be between 0 and GetProjectSubDirectoryCount()-1.
		\return The directory associated by the index value, not by ID.
		if the input index is invalid, then NULL is returned
	 */
	virtual const TCHAR* GetProjectSubDirectory(int aIndex) const = 0;
	
	//! \brief Adds an ID to a persistent internal filter table.
	/*! Adds a File IO ID to an internal filter table that is referenced when
		creating a Project setup.  Folders added to this list (by their ID)
		are NOT created when creating a Project workspace.
		\param[in] aID An ID for a folder to not include in the Project
		workspace creating process.
		\see GetDir(int)
		\see DoProjectSetupSteps()
		\see DoProjectSetupStepsUsingDirectory(const MaxSDK::Util::Path&)
		\see MAXDirIDs "MAX Directory IDs"
	 */
	virtual void AddProjectDirectoryCreateFilter(int aID) = 0;
	
	//! \brief Removes all IDs from a persistent internal filter table.
		/*! Removes all File IO IDs from an internal filter table that is referenced when
		creating a Project setup.  Folders added to this list (by their ID)
		are NOT created when creating a Project workspace.
		\see AddProjectDirectoryCreateFilter(int)
		\see GetDir(int)
		\see DoProjectSetupSteps()
		\see DoProjectSetupStepsUsingDirectory(const MaxSDK::Util::Path&)
	*/
	virtual void RemoveAllProjectDirectoryCreateFilters() = 0;
	
	//! \brief Removes an ID from a persistent internal filter table.
		/*! Removes a File IO ID from an internal filter table that is referenced when
		creating a Project setup.  Folders added to this list (by their ID)
		are NOT created when creating a Project workspace.
		\param[in] aID An ID for a folder to not include in the Project
		workspace creating process.
		\see AddProjectDirectoryCreateFilter(int)
		\see GetDir(int)
		\see DoProjectSetupSteps()
		\see DoProjectSetupStepsUsingDirectory(const MaxSDK::Util::Path&)
		\see MAXDirIDs "MAX Directory IDs"
	*/
	virtual void RemoveProjectDirectoryCreateFilter(int aID) = 0;
	
	//! \brief Returns the single instance of this manager.

	//! Gets the single instance of this class.
	//! \return The single instance of this class.
	CoreExport static IPathConfigMgr* GetPathConfigMgr(); 
};




#endif // IPATHCONFIG_H
