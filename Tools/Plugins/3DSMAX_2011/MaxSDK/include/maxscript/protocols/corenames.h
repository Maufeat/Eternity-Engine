/*	
 *		core_names.h - def_names for all the name objects that the MAXScript substrate code uses
 *
 *			Copyright � John Wainwright 1996
 *
 */
#pragma warning(push)
#pragma warning(disable:4100)

/* useful interned names */
	def_name(2D)
	def_name(2_5D)
	def_name(3D)
	def_name(abort)
	def_name(about)
	def_name(active)
	def_name(across)
	def_name(align)
	def_name(all)
	//def_name(angle)
	def_name(animate)
	def_name(animatable)
	def_name(antiAliasFilter)
	def_name(antiAliasFilterSize)
	def_name(any)
	def_name(apply)
	def_name(aspect)
	def_name(atmospheric)
	def_name(attachMat)
	def_name(attachedToNode)
	def_name(attribID)
	def_name(automatic)

	// Used as value for dupMtlNameAction function parameter for xrefs.addNewXRefObject (same name as objXRefMgr published interface)
	def_name(autoRename)
	def_name(axis)
	def_name(b)
	def_name(bakeAll)
	def_name(bakeSelected)
	def_name(bakeSelectedCrop)
	def_name(beep)
	def_name(before)
	def_name(bitmap)
	def_name(blowUp)
	def_name(blue)
	def_name(blur)
	def_name(bold)
	def_name(border)
	def_name(buildMesh)
	def_name(button)
	def_name(buttonDown)
	def_name(buttonText)
	def_name(buttonUp)
	def_name(camera)
	def_name(canManipulate)
	def_name(canManipulateNode)
	def_name(category)
	def_name(categoryDesc)
	def_name(caption)
	def_name(center)
	def_name(centripetal)
	def_name(change)
	def_name(changed)
	def_name(changes)
	def_name(channels)
	def_name(channelsRequired)
	def_name(checkbox)
	def_name(checkbutton)
	def_name(checked)
	def_name(checkedColor)
	def_name(class)
	def_name(clear)
	def_name(classID)
	def_name(clone)
	def_name(close)
	def_name(cmdPanel)
	def_name(controls)
	def_name(rgb)
	def_name(color)
	def_name(colorPicker)
	def_name(columns)
	def_name(combobox)
	def_name(common)
	def_name(continue)
	def_name(contrast)
	def_name(controller)
	def_name(coordsys)
	def_name(copy)
	def_name(count)
	def_name(create)
	def_name(current)
	def_name(default)
	def_name(defData)
	def_name(deleted)
	def_name(description)
	def_name(detachedFromNode)
	def_name(determinantsign)
	def_name(deinterlace)
	def_name(dir)
	def_name(disableBitmapProxies)
	def_name(display)
	def_name(distance)
	def_name(doubleClicked)
#ifndef WEBVERSION
#ifndef NO_DRAFT_RENDERER
	def_name(draft)
#endif // NO_DRAFT_RENDERER
#endif // WEBVERSION
	def_name(drop)
	def_name(dropdownList)
	// Used as function parameter for xrefs.addNewXRefObject (same name as objXRefMgr published interface)
	def_name(dupMtlNameAction)
	def_name(dynamicOnly)
	def_name(edittext)
	def_name(edge)
	def_name(effectsChannel)
	def_name(effectsDlg)
	def_name(enabled)
	def_name(enabledInViews)
	def_name(enabledInRenders)
	def_name(enablePixelSampler)
	def_name(encryptFile)
	def_name(entered)
	def_name(error)
	def_name(errPrompt)
	def_name(escape)
	def_name(even)
	def_name(execute)
	def_name(extend)
	def_name(extends)
	def_name(extract)
	def_name(faces)
	def_name(featureBounds)
	def_name(fieldorder)
	def_name(fieldwidth)
	def_name(filename)
	def_name(filmback)
	def_name(filmbackCropEnabled)
	def_name(filter)
	def_name(first)
	def_name(float)
	def_name(for)
	def_name(force2sided)
	def_name(forceListenerFocus)
	def_name(frame)
	def_name(framerange)
	def_name(freeMove)
	def_name(from)
	def_name(fromframe)
	def_name(g)
	def_name(get)
	def_name(getDisplayMesh)
	def_name(getDisplayShadedMesh)
	def_name(gamma)
	def_name(gimbal)
	def_name(gizmo)
	def_name(grayscale)
	def_name(green)
	def_name(grid)
	def_name(group)
	def_name(handleAt)
	def_name(hasAlpha)
	def_name(hasFocus)
	def_name(hasUVW)
	def_name(hdr)
	def_name(height)
	def_name(helper)
	def_name(hidden)
	def_name(high)
	def_name(highlightColor)
	def_name(horizontal)
	def_name(image)
	def_name(images)
	def_name(implicitWild)
	def_name(import)
	def_name(icon)
	def_name(id)
	def_name(IDToMat)
	def_name(incleft)
	def_name(include)
	def_name(incright)
	def_name(independent)
	def_name(indices)
	def_name(infinite)
	def_name(init)
	def_name(initialRollupState)
	def_name(integer)
	def_name(internalCategory)
	def_name(into)
	def_name(invert)
	def_name(invisible)
	def_name(isAnimated)
	def_name(isChecked)
	def_name(isEmpty)
	def_name(isEnabled)
	def_name(isSelected)
	def_name(isVisible)
	def_name(items)
	def_name(keyboard)
	def_name(keep)
	def_name(keys)
	def_name(keyDown)
	def_name(keyUp)
	def_name(keyword)
	def_name(label)
	def_name(labels)
	def_name(layer)
	def_name(left)
	def_name(length)
	def_name(lengthsegs)
	def_name(light)
	def_name(listbox)
	def_name(level)
	def_name(load)
	def_name(local)
	def_name(low)
	def_name(map)
	def_name(mapButton)
	def_name(manual)
	def_name(matchSpace)
	def_name(material)
	def_name(materialButton)
	def_name(materialIDs)
	def_name(matID)
	def_name(matIDs)
	def_name(max)
	def_name(medium)
	def_name(merge)
	def_name(message)
	def_name(middle)
	def_name(min)
	def_name(modal)
	def_name(mode)
	def_name(modifier)
	def_name(modifiers)
	def_name(modLimitZMin)
	def_name(modLimitZMax)
	def_name(modLimitAxis)
	def_name(mouseAbort)
	def_name(mouseDown)
	def_name(mouseMove)
	def_name(mousePoint)
	def_name(mouseMoveCallback)
	def_name(mouseUp)
	def_name(motionBounds)
	def_name(move)
	def_name(moved)
	def_name(mtlEditor)
	def_name(multiple)
	def_name(name)
	def_name(names)
	def_name(netrender)
	def_name(newNodeCallback)
	def_name(noCloseButton)
	def_name(node)
	def_name(nodeTM)
	def_name(noLoad)
	def_name(noMap)
	def_name(none)
	def_name(noPrompt)
	def_name(noRedraw)
	def_name(noReplace)
	def_name(normal)
	def_name(normals)
	def_name(noslide)
	def_name(nthframe)
	def_name(numberSet)
	def_name(numDigits)
	def_name(numfaces)
	def_name(numframes)
	def_name(numtrackers)
	def_name(numverts)
	def_name(numsubs)
	def_name(object)
	def_name(objectoffsetpos)
	def_name(objectoffsetrot)
	def_name(objectoffsetscale)
	def_name(objecttransform)
	def_name(objectID)
	def_name(odd)
	def_name(off)
	def_name(offset)
	def_name(okToClose)
	def_name(okToDisplay)
	def_name(on)
	def_name(onObject)
	def_name(open)
	def_name(openEncryptedFile)
	def_name(options)
	def_name(orient)
	def_name(outputdevice)
	def_name(outputHDRbitmap)
	def_name(outputheight)
	def_name(outputfile)
	def_name(outputOnly)
	def_name(outputSize)
	def_name(outputwidth)
	def_name(palette)
	def_name(parallel)
	def_name(parameters)
	def_name(parent)
	def_name(persistent)
	def_name(pickbutton)
	def_name(picked)
	def_name(pickedobject)
	def_name(pivot)
	def_name(pixelaspect)
	def_name(point3)
	def_name(pos)
	def_name(position)
	def_name(preApply)
	def_name(prefix)
	def_name(pressed)
#ifdef WEBVERSION
	def_name(flash)
#else
	def_name(production)
#endif
	def_name(progressBar)
 	def_name(project)
 	def_name(projected)

	// Used as value for dupMtlNameAction function parameter for xrefs.addNewXRefObject (same name as objXRefMgr published interface)
	// also used elsewhere.
	def_name(prompt)
	def_name(pt2Prompt)
	def_name(quiet)
	def_name(radiobuttons)
	def_name(r)
	def_name(range)
	def_name(rank)
	def_name(rankDistance)
	def_name(red)
	def_name(redefine)
	def_name(redraw)
	def_name(redrawViews)
	def_name(region)
	def_name(regionCrop)
	def_name(reload)
	def_name(renderApproximation)
	def_name(renderatmosphericeffects)
	def_name(renderEffect)
	def_name(renderer)
	def_name(renderfields)
	def_name(renderhiddenobjects)
	def_name(renderType)
	def_name(replaceUI)
	def_name(resized)
	def_name(reset)
	def_name(returnNewNodes)
	def_name(right)
	def_name(rightClick)
	def_name(rollout)
	def_name(rolledUp)
	def_name(rotation)
	def_name(rotationpart)
	def_name(rubberBand)
	def_name(rubberBandColor)
	def_name(run)
	def_name(scale)
	def_name(scalepart)
	def_name(scalerotationpart)
	def_name(screen)
	def_name(scrollPos)
	def_name(selectedtracker)
	def_name(set)
	def_name(setKeyBrackets)
	def_name(setTime)
	def_name(setGenUVW)
	def_name(shape)
	def_name(shared)
	def_name(showHidden)
	def_name(showInViewport)
	def_name(showTracks)
	def_name(silentErrors)
	def_name(simple)
	def_name(simpleMod)
	def_name(simpleObject)
	def_name(simpleManipulator)
	def_name(single)
	def_name(size)
	def_name(slider)
	def_name(snap)
	def_name(source)
	def_name(spinner)
	def_name(standard)
	def_name(start)
	def_name(state)
	def_name(steps)
	def_name(stop)
	def_name(subAnim)
	def_name(subAnimStructure)
	def_name(superblack)
	def_name(tabSize)
	def_name(tabSizeVariable)
	def_name(tangent)
	def_name(target)
	def_name(temp)
	def_name(terminators)
	def_name(text)
	def_name(textureMap)
	def_name(textureSurface1)
	def_name(textureSurface2)
	def_name(textureVerts)
	def_name(time)
	def_name(timeChange)
	def_name(ticks)
	def_name(title)
	def_name(to)
	def_name(toframe)
	def_name(toolTip)
	def_name(topology)
	def_name(trackCallback)
	def_name(transform)
	def_name(translationpart)
	def_name(treeMove)
	def_name(treeCopy)
	def_name(tverts)
	def_name(type)
	def_name(assettype)
	def_name(types)
	def_name(ui)
	def_name(unique)
	def_name(uniform)
	def_name(update)
	def_name(updateGizmos)
	def_name(userDefined)
	// Used as value for dupMtlNameAction function parameter for xrefs.addNewXRefObject (same name as objXRefMgr published interface)
	def_name(useScene)
	// Used as value for dupMtlNameAction function parameter for xrefs.addNewXRefObject (same name as objXRefMgr published interface)
	def_name(useXRefed)
	def_name(worldUnits)
	def_name(value)
	def_name(velocity)
	def_name(version)
	def_name(vertical)
	def_name(verts)
	def_name(vertices)
	def_name(view)
	def_name(viewApproximation)
	def_name(visible)
	def_name(vfb)
	def_name(videocolorcheck)
	def_name(width)
	def_name(widthsegs)
	def_name(working_pivot)
	def_name(world)
	def_name(x)
	def_name(x_rotation)
	def_name(xref)
	def_name(y)
	def_name(y_rotation)
	def_name(z)
	def_name(z_rotation)

	def_name(ambientMap)  // HEY!! is there a better way?
	def_name(diffuseMap)
	def_name(specularMap)
	def_name(shininessMap)
	def_name(shinestrengthMap)
	def_name(selfillumMap)
	def_name(opacityMap)
	def_name(filterMap)
	def_name(bumpMap)
	def_name(reflectionMap)
	def_name(refractionMap)
	def_name(displacementMap)

	def_name(ambientMapAmount)
	def_name(diffuseMapAmount)
	def_name(specularMapAmount)
	def_name(shininessMapAmount)
	def_name(shinestrengthMapAmount)
	def_name(selfillumMapAmount)
	def_name(opacityMapAmount)
	def_name(filterMapAmount)
	def_name(bumpMapAmount)
	def_name(reflectionMapAmount)
	def_name(refractionMapAmount)
	def_name(displacementMapAmount)

	def_name(ambientMapEnable)
	def_name(diffuseMapEnable)
	def_name(specularMapEnable)
	def_name(shininessMapEnable)
	def_name(shinestrengthMapEnable)
	def_name(selfillumMapEnable)
	def_name(opacityMapEnable)
	def_name(filterMapEnable)
	def_name(bumpMapEnable)
	def_name(reflectionMapEnable)
	def_name(refractionMapEnable)
	def_name(displacementMapEnable)

	def_name(glossinessMap) 
	def_name(glossinessMapEnable) 
	def_name(glossinessMapAmount)
	def_name(specularLevelMap) 
	def_name(specularLevelMapEnable) 
	def_name(specularLevelMapAmount)
	def_name(luminosityMap) 
	def_name(luminosityMapEnable) 
	def_name(luminosityMapAmount)
	def_name(transparencyMap) 
	def_name(transparencyMapEnable) 
	def_name(transparencyMapAmount)
	def_name(environmentMap) 
	def_name(environmentMapEnable) 
	def_name(environmentMapAmount)
	def_name(transEnvMap) 
	def_name(transEnvMapEnable) 
	def_name(transEnvMapAmount)
	def_name(iorMap) 
	def_name(iorMapEnable) 
	def_name(iorMapAmount)
	def_name(translucencyMap) 
	def_name(translucencyMapEnable) 
	def_name(translucencyMapAmount)
	def_name(extraLightingMap) 
	def_name(extraLightingMapEnable) 
	def_name(extraLightingMapAmount)

	def_name(flourescenceMap) 
	def_name(flourescenceMapEnable) 
	def_name(flourescenceMapAmount)

// The following names have been added
// in 3ds max 4.2.  If your plugin utilizes this new
// mechanism, be sure that your clients are aware that they
// must run your plugin with 3ds max version 4.2 or higher.

	def_name(fluorescenceMap) 
	def_name(fluorescenceMapEnable) 
	def_name(fluorescenceMapAmount)

// End of 3ds max 4.2 Extension

	def_name(colorDensityMap) 
	def_name(colorDensityMapEnable) 
	def_name(colorDensityMapAmount)
	def_name(fogColorMap) 
	def_name(fogColorMapEnable) 
	def_name(fogColorMapAmount)
	def_name(blurringMap) 
	def_name(blurringMapEnable) 
	def_name(blurringMapAmount)
	def_name(defocussingMap) 
	def_name(defocussingMapEnable) 
	def_name(defocussingMapAmount)
	def_name(diffusionMap) 
	def_name(diffusionMapEnable) 
	def_name(diffusionMapAmount)

	def_name(objects)
	def_name(geometry)
	def_name(lights)
	def_name(cameras)
	def_name(helpers)
	def_name(shapes)
	def_name(systems)
	def_name(spacewarps)
	def_name(selection)

	def_name(menuitem)
	def_name(separator)
	def_name(seperator)
	def_name(submenu)

	def_name(selOnly)
	def_name(allKeys)
	def_name(children)
	def_name(linkToKeys)
	def_name(selected)
	def_name(select)
	def_name(interpolate)
	def_name(slide)
	def_name(rightToLeft)
	def_name(replacekeys)
	def_name(insertkeys)
	def_name(dontSort)

	def_name(smooth)
	def_name(linear)
	def_name(step)
	def_name(fast)
	def_name(slow)
	def_name(custom)
	def_name(flat)
	def_name(auto)

	def_name(inTangent)
	def_name(outTangent)
	def_name(inTangentLength)
	def_name(outTangentLength)
	def_name(inTangentType)
	def_name(outTangentType)
	def_name(x_locked)
	def_name(y_locked)
	def_name(z_locked)
	def_name(w_locked)
	def_name(constantVelocity)
	def_name(freeHandle)
	def_name(tension)
	def_name(bias)
	def_name(continuity)
	def_name(easeTo)
	def_name(easeFrom)

	def_name(corner)
	def_name(coPlanar)
	def_name(bezier)
	def_name(bezierCorner)
	def_name(curve)
	def_name(line)

	def_name(constant)
	def_name(cycle)
	def_name(loop)
	def_name(pingPong)
	def_name(relativeRepeat)

	def_name(deleteOldDups)
	def_name(mergeDups)
	def_name(skipDups)
	def_name(promptDups)
	def_name(autoRenameDups)

	//RK: Added these
	def_name(omni)
	def_name(targetSpot)
	def_name(freeSpot)
	def_name(freeDirect)
	def_name(targetDirect)
	def_name(free)

	def_name(mapping)
	def_name(shadows)
	def_name(autoReflect)
	def_name(forceWireframe)
	def_name(wireThickness)
	def_name(antiAliasing)
	def_name(filterMaps)
	def_name(pixelSize)
	def_name(objectMotionBlur)
	def_name(objectBlurSamples)
	def_name(objectBlurDuration)
	def_name(objectBlurSubdivisions)
	def_name(imageMotionBlur)
	def_name(imageBlurDuration)
	def_name(imageBlurEnvironmentMap)
	def_name(raytracedShadowDepth)
	def_name(autoReflectLevels)
#ifdef	SINGLE_SUPERSAMPLE_IN_RENDER
	def_name(sampleQuality)
#endif	// SINGLE_SUPERSAMPLE_IN_RENDER

	def_name(aperture)
	def_name(ditherTrueColor)
	def_name(ditherPaletted)
	def_name(renderPAL)
	def_name(superBlackThreshold)
	def_name(maxPixelSize)

	def_name(inactive)
	def_name(videoPost)
	def_name(render)
	def_name(missing)
	def_name(localOnly)
	def_name(skipCustAttributes)
	def_name(skipVPRender)
	def_name(firstSubOnly)


	def_name ( uParam )
	def_name ( uTangent )
	def_name ( trimCurve )
	def_name ( flipTrim )
	def_name ( parent1 )
	def_name ( parent2 )
	def_name ( surfaceParent )
	def_name ( parentID )
	def_name ( surfaceParentID )
	def_name ( parent1ID )
	def_name ( parent2ID )
	def_name ( trimCurve1 )
	def_name ( trimCurve2 )
	def_name ( flipTrim1 )
	def_name ( flipTrim2 )
	def_name ( vParam )
	def_name ( vTangent )
	def_name ( parameter )
	def_name ( positive )
	def_name ( negative )
	def_name ( cubic )

	def_name ( isClosed );
	def_name ( numTrimPoints );
	def_name ( parameterRangeMin );
	def_name ( parameterRangeMax );
	def_name ( order );
	def_name ( closed );
	def_name ( numKnots );
	def_name ( numCVs );
	def_name ( endsOverlap );
	def_name ( numPoints );
	def_name ( flip1 );
	def_name ( flip2 );
	def_name ( tension1 );
	def_name ( tension2 );
	def_name ( radius );
	def_name ( trim1 );
	def_name ( trim2 );
	def_name ( length1 );
	def_name ( length2 );
	def_name ( X );
	def_name ( Y );
	def_name ( Z );
	def_name ( XY );
	def_name ( XZ );
	def_name ( YZ );
	def_name ( U );
	def_name ( V );
	def_name ( channel );
	def_name ( uOrder );
	def_name ( vOrder );
	def_name ( numUKnots );
	def_name ( numVKnots );
	def_name ( numUCVs );
	def_name ( numVCVs );
	def_name ( closedU );
	def_name ( closedV );
	def_name ( edge1 );
	def_name ( edge2 );
	def_name ( numCurves );
	def_name ( flip );
	def_name ( extrudeVector );
	def_name ( axisTM );
	def_name ( sweep );
	def_name ( relational );
	def_name ( uEdgesOverlap );
	def_name ( vEdgesOverlap );
	def_name ( viewConfig )
	def_name ( viewIsoULines )
	def_name ( viewIsoVLines )
	def_name ( viewMeshUSteps )
	def_name ( viewMeshVSteps )
	def_name ( viewMeshApproxType )
	def_name ( viewSpacialEdge )
	def_name ( viewCurvatureAngle )
	def_name ( viewCurvatureDistance )
	def_name ( viewViewDependent )
	def_name ( renderConfig )
	def_name ( renderIsoULines )
	def_name ( renderIsoVLines )
	def_name ( renderMeshUSteps )
	def_name ( renderMeshVSteps )
	def_name ( renderMeshApproxType )
	def_name ( renderSpacialEdge )
	def_name ( renderCurvatureAngle )
	def_name ( renderCurvatureDistance )
	def_name ( renderViewDependent )
	def_name ( config )
	def_name ( isoULines )
	def_name ( isoVLines )
	def_name ( meshUSteps )
	def_name ( meshVSteps )
	def_name ( meshApproxType )
	def_name ( spacialEdge )
	def_name ( curvatureAngle )
	def_name ( curvatureDistance )
	def_name ( viewDependent )
	def_name ( startPoint )
	def_name ( useTangent )
	def_name ( flipTangent )
	def_name ( autoParam )
	def_name ( shapeIDs )
	def_name ( rigid )
	def_name ( curveStartPoint )
	def_name ( curveStartPoint1 )
	def_name ( curveStartPoint2 )
	def_name ( displayShadedLattice )

	def_name ( seed )
	def_name ( trim )
	def_name ( pVec )
	def_name ( clp )
	def_name ( numUCurves )
	def_name ( numVCurves )
	def_name ( rail )
	def_name ( railID )
	def_name ( rail1 )
	def_name ( rail1ID )
	def_name ( rail2 )
	def_name ( rail2ID )
	def_name ( displayCurves )
	def_name ( displaySurfaces )
	def_name ( displayLattices )
	def_name ( displaySurfCVLattices )
	def_name ( displayCurveCVLattices )
	def_name ( displayDependents )
	def_name ( displayTrimming )
	def_name ( degradeOnMove )
	//def_name ( renderable )
	def_name ( generateUVs1 )
	def_name ( generateUVs2 )

	def_name ( isoOnly )
	def_name ( isoAndMesh )
	def_name ( meshOnly )
	def_name ( parametric )
	def_name ( spatial )
	def_name ( curvature )
	def_name ( regular )
	def_name ( spatialAndCurvature )

	def_name ( capStart )
	def_name ( capEnd )
	def_name ( capType )
	def_name ( weldCore )
	def_name ( flipNormals )
	def_name ( segs )
	def_name ( matIDS )

	def_name ( cvDelta )
	def_name ( jumpDelta )
	def_name ( subpixelLevel )

// The following names have been added
// in 3ds max 4.2.  If your plugin utilizes this new
// mechanism, be sure that your clients are aware that they
// must run your plugin with 3ds max version 4.2 or higher.

	def_name ( inViewport )

	def_name ( quadPatch )
	def_name ( triPatch )
	def_name ( undefPatch )

	def_name ( eof )
	def_name ( errorAtEOF )

	def_name ( anim )
	def_name ( client )
	def_name ( subNum )

	def_name ( relativeTo )

// LAM: Added these 5/2/01
/* render types */
	def_name ( crop )
	def_name ( boxselected )
	def_name ( blowup )
	def_name ( regionselected )
	def_name ( cropselected )

	def_name ( immediateReturn )

	def_name ( index )
	// for the visual frame buffer
	def_name ( vfb_upper_left  ) // 1
	def_name ( vfb_lower_left  ) // 2
	def_name ( vfb_upper_right ) // 3
	def_name ( vfb_lower_right ) // 4
	def_name ( vfb_center ) // 5

	def_name ( vfb_renderer_position ) // 10
	def_name ( vfb_vprimary_position ) // 11
	def_name ( vfb_vsecondary_position ) // 12
// End of 3ds max 4.2 Extension

// LAM: Added 9/6/01
	def_name ( pickFrozen )
	def_name ( colorClampType )
	def_name ( imageBlurEnv )
	def_name ( imageBlurTrans )
	def_name ( conserveMemory )
	def_name ( supportsActiveShade )
	def_name ( surface )
	def_name ( notAutomatic )
	def_name ( autoCentripetal )
	def_name ( autoUniform )
	def_name ( DummyClass )
	def_name ( mesh )
	def_name ( progressCB )
	def_name ( renderApertureChanged )

// LAM: Added these 8/22/01
	def_name ( dialogBar )

// LAM: Added 9/17/01
	def_name ( useRadiosity )
	def_name ( computeRadiosity )
	def_name ( enableSSE )

// AF (10/05/01) 
	def_name ( trackViewUtility )
	def_name ( trackSelectionChanged )
	def_name ( nodeSelectionChanged )
	def_name ( keySelectionChanged )
	def_name ( timeSelectionChanged )
	def_name ( majorModeChanged )
	def_name ( trackListChanged )
	def_name ( trackView )
	def_name ( trackViewClosed )
	def_name ( filterAnim )

// LAM: Added these 2/11/02
	def_name ( indeterminate )
	def_name ( triState )

// AF: Added (03/12/02)
	def_name ( add )
	def_name ( skip )
	def_name ( skipNode )
	//def_name ( stop ) already defined above

// LAM: Added these 2/11/02
	def_name ( selectedOnly )

// LAM: Added these 5/14/02
	def_name ( inDialog )
	def_name ( isOpen )
	def_name ( useFileUnits )

// LAM: Added these 7/23/02
	def_name ( rollouts )
	def_name ( subRollout )

	def_name(style);
	def_name(cui_dock_top);      // CUI_TOP_DOCK
	def_name(cui_dock_bottom);   // CUI_BOTTOM_DOCK
	def_name(cui_dock_left);     // CUI_LEFT_DOCK
	def_name(cui_dock_right);    // CUI_RIGHT_DOCK
	def_name(cui_dock_horz);     // CUI_HORIZ_DOCK
	def_name(cui_dock_vert);     // CUI_VERT_DOCK
	def_name(cui_dock_all);      // CUI_ALL_DOCK
	def_name(cui_floatable);     // CUI_FLOATABLE
	def_name(cui_handles);       // CUI_SM_HANDLES
	def_name(cui_max_sized);     // CUI_MAX_SIZED // AF Added (11/20/02)
	def_name(minSize);
	def_name(maxSize);

	def_name ( bmp_tile )
	def_name ( bmp_center )
	def_name ( bmp_stretch )
	def_name ( mousemove )

	def_name ( lbuttondown )
	def_name ( lbuttonup )
	def_name ( lbuttondblclk )
	def_name ( mbuttondown )
	def_name ( mbuttonup )
	def_name ( mbuttondblclk )
	def_name ( rbuttondown )
	def_name ( rbuttonup )
	def_name ( rbuttondblclk )
	def_name ( menu )
	def_name ( style_titlebar )
	def_name ( style_border )
	def_name ( style_toolwindow )
	def_name ( style_resizing )
	def_name ( style_minimizebox )
	def_name ( style_maximizebox )
	def_name ( style_sysmenu )
	def_name ( style_sunkenedge )
	def_name ( bgcolor )
	def_name ( fgcolor )
	def_name ( bmpstyle )
	def_name ( escapeEnable )

	def_name ( align_topleft )
	def_name ( align_topcenter )
	def_name ( align_topright )
	def_name ( align_bottomleft )
	def_name ( align_bottomcenter )
	def_name ( align_bottomright )
	def_name ( align_vcenterleft )
	def_name ( align_vcentercenter )
	def_name ( align_vcenterright )

	def_name ( insert )
	def_name ( append )
	def_name ( delete )
	def_name ( refDeleted )
	def_name ( setCount )
	def_name ( sort )
	def_name ( tabChanged )

	def_name ( this )
	def_name ( cancelled )

	def_name ( custAttributes )
	def_name ( isDeleted )
	def_name ( baseObject )

	// LAM - 11/16/02
	def_name ( keyable )
	def_name ( isHSV )
	def_name ( supportsKeys )

	// LAM - 3/5/03
	def_name ( postload )
	def_name ( postcreate )

	// LAM - 3/22/03
	def_name ( delayed )

	// LAM - 5/27/03
	def_name ( dolayer )
	def_name ( w )
	def_name ( alpha )

	// LAM - 6/2/03
	def_name ( autoPromoteDelegateProps )
	def_name ( warning )
	def_name ( info )
	def_name ( debug )
	def_name ( supportsTexureBaking )
	def_name ( instance )
	def_name ( reference )
    
	def_name( rendSimplifyAreaLights )

	// LAM - 6/24/03
	def_name ( missingExtFilesAction )
	def_name ( missingExtFilesList )
	def_name ( missingDLLsAction )
	def_name ( missingDLLsList )
	def_name ( missingXRefsAction )
	def_name ( missingXRefsList )
	def_name ( missingUVWAction )
	def_name ( missingUVWList )

	def_name ( logToFile )
	def_name ( logmsg )

	def_name ( placement )
	def_name ( minimized )
	def_name ( maximized )
	def_name ( usePBValidity )
	def_name ( lockWidth )
	def_name ( lockHeight )

	def_name ( promptMtlDups )
	def_name ( useMergedMtlDups )
	def_name ( useSceneMtlDups )
	def_name ( renameMtlDups )
	def_name ( promptReparent )
	def_name ( alwaysReparent )
	def_name ( neverReparent )

	def_name ( clearNeedSaveFlag )
	def_name ( addFileToMRU )
	def_name ( useNewFile )

	def_name ( enabledIn )
	def_name ( disabledIn )

	def_name ( readOnly )
	def_name ( yes )
	def_name ( no )
	def_name ( cancel )
	def_name ( AltExecute )
	def_name ( closeDialogs )

	def_name ( root )
	def_name ( proxy )
	def_name ( manipulators )

	def_name ( isDisplayed )
	def_name ( autoDisplay )
	def_name ( asString )
	def_name ( explicitNames )
	def_name ( remap )
	def_name ( immediateOnly )
	def_name ( labelOnTop )

	def_name ( exact ) 
	def_name ( ignoreCase )

	def_name ( printAllElements )

	def_name ( drawBG )
	def_name ( drawGrid )
	def_name ( upperToolbar )
	def_name ( showReset )
	def_name ( lowerToolbar )
	def_name ( scrollBars )
	def_name ( autoScroll )
	def_name ( ruler )
	def_name ( constrainY )
	def_name ( hideDisabled )
	def_name ( singleSelect )
	def_name ( noFilterButtons )

	def_name ( localizedName )

	// !!! NOTE !!! Do not change the order of the following. 
	// Used to order the listing of param names in the shape
	// MAXClasses
	def_name ( render_thickness )
	def_name ( render_sides )
	def_name ( render_angle )
	def_name ( render_renderable )
	def_name ( render_mapcoords )
	def_name ( render_viewport_thickness )
	def_name ( render_viewport_sides )
	def_name ( render_viewport_angle )
	def_name ( render_displayRenderMesh )
	def_name ( render_useViewportSettings )
	def_name ( render_displayRenderSettings )
	
	def_name ( thickness )
	def_name ( sides )
	def_name ( angle )
	def_name ( renderable )
	def_name ( mapcoords )
	def_name ( mapCoords )
	def_name ( viewport_thickness )
	def_name ( viewport_sides )
	def_name ( viewport_angle )
	def_name ( displayRenderMesh )
	def_name ( useViewportSettings )
	def_name ( displayRenderSettings )
	// End of do not change order
	
	def_name ( using )
	def_name ( dataArray )
	def_name ( lBoundsArray )
	def_name ( dimensions )

	def_name ( showLocals )

	def_name ( ignoreStringEscapes )
	def_name ( debugBreak )
	def_name ( doAssert )
	def_name ( threadID )
	def_name ( firstFrameOnly )
	def_name ( owner )

	def_name ( renderElementBitmaps )
	def_name ( renderMultiPassEffects )
	def_name ( renderElements )
	def_name ( overlay );

	def_name ( unsupportedRenderEffectAction )
	def_name ( unsupportedRenderEffectList )

	def_name ( defaultAction )
	def_name ( forceCreate )

	def_name ( delaunay )
	def_name ( tree )
	def_name ( subdivStyle )
	def_name ( minLevels )
	def_name ( maxLevels )
	def_name ( maxTris )

	def_name ( initialDir )
	def_name ( useWireColor )

	def_name ( historyCategory )

	def_name ( dialog )
	def_name ( listener )
	def_name ( debug_output_window )
	def_name ( c_break)
	def_name ( showStack )

	def_name ( assetUser )
	def_name ( autoUndoEnabled )

	def_name ( hwnd )

	def_name ( internalName )

	def_name (saveAsVersion)

/* distinguished marker values, un-interned names */
	def_marker(keyarg_marker, "#keys")

#pragma warning(pop)
