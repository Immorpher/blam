// Quick and dirty common macro actions from common.txt so mappers dont have to load them

static const char *g_builtin_common_defs =
    "#define PushVar(var)                                    204:var\n" // System
    "#define Delay(tic)                                      203:tic; wait\n"
    "#define Door_Open(tag)                                  2:tag\n" // Doors
    "#define Door_Close(tag)                                 3:tag\n"
    "#define Door_Raise(tag)                                 4:tag\n"
    "#define Door_CloseWait30Open(tag)                       16:tag\n"
    "#define Door_RaiseFast(tag)                             108:tag\n"
    "#define Door_OpenFast(tag)                              109:tag\n"
    "#define Door_CloseFast(tag)                             110:tag\n"
    "#define Floor_Raise(tag)                                5:tag\n" // Floors
    "#define Floor_Lower(tag)                                19:tag\n"
    "#define Floor_RaiseToNearest(tag)                       30:tag\n"
    "#define Floor_LowerFast(tag)                            36:tag\n"
    "#define Floor_LowerChange(tag)                          37:tag\n"
    "#define Floor_LowerToLowest(tag)                        38:tag\n"
    "#define Floor_RaiseCrush(tag)                           56:tag\n"
    "#define Floor_Raise24(tag)                              58:tag\n"
    "#define Floor_Raise24Change(tag)                        59:tag\n"
    "#define Floor_RaiseToNearest2(tag)                      119:tag\n"
    "#define Floor_MoveByValue(tag, value)                   PushVar(value); 212:tag\n"
    "#define Floor_MoveByValueFast(tag, value)               PushVar(value); 228:tag\n"
    "#define Floor_MoveByValueInstant(tag, value)            PushVar(value); 229:tag\n"
    "#define Floor_SetHeight(tag, height)                    PushVar(height); 244:tag\n"
    "#define Floor_MoveByHeight(tag, height)                 PushVar(height); 247:tag\n"
    "#define Stairs_Build(tag)                               8:tag\n" // Stairs
    "#define Stairs_Build16Fast(tag)                         100:tag\n"
    "#define Ceiling_RaiseCrush(tag)                         6:tag\n" // Ceilings
    "#define Ceiling_RaiseCrushOnce(tag)                     25:tag\n"
    "#define Ceiling_LowerToFloor(tag)                       43:tag\n"
    "#define Ceiling_RaiseCrush2(tag)                        44:tag\n"
    "#define Ceiling_StopCrusher(tag)                        57:tag\n"
    "#define Ceiling_SilentCrusher(tag)                      141:tag\n"
    "#define Ceiling_MoveByValue(tag, value)                 PushVar(value); 210:tag\n"
    "#define Ceiling_MoveByValueFast(tag, value)             PushVar(value); 226:tag\n"
    "#define Ceiling_MoveByValueInstant(tag, value)          PushVar(value); 227:tag\n"
    "#define Ceiling_RaiseCrushOnceFast(tag)                 232:tag\n"
    "#define Ceiling_SetHeight(tag, height)                  PushVar(height); 245:tag\n"
    "#define Ceiling_MoveByHeight(tag, height)               PushVar(height); 252:tag\n"
    "#define Plat_DownWaitUp(tag)                            10:tag\n" // Platforms
    "#define Plat_RaiseChange(tag)                           22:tag\n"
    "#define Plat_PerpetualRaise(tag)                        53:tag\n"
    "#define Plat_Stop(tag)                                  54:tag\n"
    "#define Plat_DownWaitUp24(tag)                          66:tag\n"
    "#define Plat_DownWaitUp32(tag)                          67:tag\n"
    "#define Plat_DownWaitUpFast(tag)                        121:tag\n"
    "#define Plat_UpWaitDown(tag)                            122:tag\n"
    "#define Plat_UpWaitDownFast(tag)                        123:tag\n"
    "#define Plat_DownUpByValue(tag, value)                  PushVar(value); 236:tag\n"
    "#define Plat_DownUpFastByValue(tag, value)              PushVar(value); 237:tag\n"
    "#define Plat_UpDownByValue(tag, value)                  PushVar(value); 238:tag\n"
    "#define Plat_UpDownFastByValue(tag, value)              PushVar(value); 239:tag\n"
    "#define Teleport_ToDest(tid)                            39:tid\n" // Teleports
    "#define Teleport_Stomp(tid)                             249:tid\n"
    "#define Thing_ModifyFlags(tid)                          93:tid\n" // Things
    "#define Thing_Alert(tid)                                94:tid\n"
    "#define Thing_SpawnDart(tid)                            202:tid\n"
    "#define Thing_Spawn(tid)                                224:tid\n"
    "#define Thing_SpawnTracer(tid)                          231:tid\n"
    "#define Thing_SetReactionTime(tics)                     233:tics\n"
    "#define Thing_Dissolve(tid)                             242:tid\n"
    "#define Sector_SetFloorColorID(tag, id)                 PushVar(id); 205:tag\n" // Sectors
    "#define Sector_SetCeilingColorID(tag, id)               PushVar(id); 206:tag\n"
    "#define Sector_SetThingColorID(tag, id)                 PushVar(id); 207:tag\n"
    "#define Sector_SetUpperWallColorID(tag, id)             PushVar(id); 208:tag\n"
    "#define Sector_SetLowerWallColorID(tag, id)             PushVar(id); 209:tag\n"
    "#define Sector_CopyFlags(dsttag, srctag)                PushVar(srctag); 220:dsttag\n"
    "#define Sector_CopySpecials(dsttag, srctag)             PushVar(srctag); 221:dsttag\n"
    "#define Sector_CopyLights(dsttag, srctag)               PushVar(srctag); 222:dsttag\n"
    "#define Sector_CopyTextures(dsttag, srctag)             PushVar(srctag); 223:dsttag\n"
    "#define Sector_CopyLightsAndInterpolate(dsttag, srctag) PushVar(srctag); 235:dsttag\n"
    "#define Line_CopyFlags(dsttag, srctag)                  PushVar(srctag); 218:dsttag\n" // Linedefs
    "#define Line_CopyTextures(dsttag, srctag)               PushVar(srctag); 219:dsttag\n"
    "#define Line_CopySpecials(dsttag, srctag)               PushVar(srctag); 230:dsttag\n"
    "#define Line_TriggerRandomLinesByTag(tags)              240:tags\n"
    "#define Elevator_MoveByValue(tag, value)                PushVar(value); 214:tag\n" // Elevator
    "#define Pillar_OpenByValue(tag, value)                  PushVar(value); 241:tag\n" // Pillar
    "#define Camera_Clear(tid)                               200:tid\n" // Camera
    "#define Camera_Set(tid)                                 201:tid\n"
    "#define Camera_MoveAndAim(tid, nexttid)                 PushVar(nexttid); 243:tid\n"
    "#define Macro_Suspend(id)                               248:id\n" // Macro control
    "#define Macro_Enable(id)                                250:id\n"
    "#define Macro_Disable(id)                               251:id\n"
    "#define Player_Freeze(tics)                             233:tics\n" // Misk
    "#define Quake(tics)                                     225:tics\n"
    "#define SetLightID(dst, src)                            PushVar(src); 234:dst\n"
    "#define Exit                                            52:0\n"
    "#define ExitToLevel(map)                                124:map\n"
    "#define UnlockCheatMenu                                 253:0\n"
    "#define DisplaySkyLogo                                  254:0\n"
    "#define No_Op                                           0:0\n";