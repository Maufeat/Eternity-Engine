#ifndef __AMBIENTSOUND_H__
#define __AMBIENTSOUND_H__

class obj_AmbientSound : public GameObject
{
	DECLARE_CLASS(obj_AmbientSound, GameObject)
private:
	char  SoundFilename[256];
	int   sndID;
	void *sndEvent;	

	void LoadNewSound(int stdID, bool paused);

public:
	void DoDraw();

public:
	obj_AmbientSound();	

#ifndef FINAL_BUILD
	void				UpdateSound( const std::string& soundPath ) ;
	virtual	float		DrawPropertyEditor(float scrx, float scry, float scrw, float scrh, const AClass* startClass, const GameObjects& selected) OVERRIDE;
#endif

	virtual	BOOL		Load(const char *name);

	virtual	BOOL		OnCreate();
	virtual	BOOL		OnDestroy();

	virtual	BOOL		Update();

	virtual void		AppendRenderables( RenderArray ( & render_arrays  )[ rsCount ], const r3dCamera& Cam )  OVERRIDE;

	virtual	void		ReadSerializedData(pugi::xml_node& node);
	virtual void		WriteSerializedData(pugi::xml_node& node);
};

#endif //__AMBIENTSOUND_H__