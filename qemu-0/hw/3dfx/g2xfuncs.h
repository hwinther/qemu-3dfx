
/* Start - generated by mkgfuncs */

typedef enum {
    FEnum_ConvertAndDownloadRle,             /* 0x00 */
    FEnum_grAADrawLine,                      /* 0x01 */
    FEnum_grAADrawPoint,                     /* 0x02 */
    FEnum_grAADrawPolygon,                   /* 0x03 */
    FEnum_grAADrawPolygonVertexList,         /* 0x04 */
    FEnum_grAADrawTriangle,                  /* 0x05 */
    FEnum_grAlphaBlendFunction,              /* 0x06 */
    FEnum_grAlphaCombine,                    /* 0x07 */
    FEnum_grAlphaControlsITRGBLighting,      /* 0x08 */
    FEnum_grAlphaTestFunction,               /* 0x09 */
    FEnum_grAlphaTestReferenceValue,         /* 0x0a */
    FEnum_grBufferClear,                     /* 0x0b */
    FEnum_grBufferNumPending,                /* 0x0c */
    FEnum_grBufferSwap,                      /* 0x0d */
    FEnum_grCheckForRoom,                    /* 0x0e */
    FEnum_grChromakeyMode,                   /* 0x0f */
    FEnum_grChromakeyValue,                  /* 0x10 */
    FEnum_grClipWindow,                      /* 0x11 */
    FEnum_grColorCombine,                    /* 0x12 */
    FEnum_grColorMask,                       /* 0x13 */
    FEnum_grConstantColorValue4,             /* 0x14 */
    FEnum_grConstantColorValue,              /* 0x15 */
    FEnum_grCullMode,                        /* 0x16 */
    FEnum_grDepthBiasLevel,                  /* 0x17 */
    FEnum_grDepthBufferFunction,             /* 0x18 */
    FEnum_grDepthBufferMode,                 /* 0x19 */
    FEnum_grDepthMask,                       /* 0x1a */
    FEnum_grDisableAllEffects,               /* 0x1b */
    FEnum_grDitherMode,                      /* 0x1c */
    FEnum_grDrawLine,                        /* 0x1d */
    FEnum_grDrawPlanarPolygon,               /* 0x1e */
    FEnum_grDrawPlanarPolygonVertexList,     /* 0x1f */
    FEnum_grDrawPoint,                       /* 0x20 */
    FEnum_grDrawPolygon,                     /* 0x21 */
    FEnum_grDrawPolygonVertexList,           /* 0x22 */
    FEnum_grDrawTriangle,                    /* 0x23 */
    FEnum_grErrorSetCallback,                /* 0x24 */
    FEnum_grFogColorValue,                   /* 0x25 */
    FEnum_grFogMode,                         /* 0x26 */
    FEnum_grFogTable,                        /* 0x27 */
    FEnum_grGammaCorrectionValue,            /* 0x28 */
    FEnum_grGlideGetState,                   /* 0x29 */
    FEnum_grGlideGetVersion,                 /* 0x2a */
    FEnum_grGlideInit,                       /* 0x2b */
    FEnum_grGlideSetState,                   /* 0x2c */
    FEnum_grGlideShamelessPlug,              /* 0x2d */
    FEnum_grGlideShutdown,                   /* 0x2e */
    FEnum_grHints,                           /* 0x2f */
    FEnum_grLfbConstantAlpha,                /* 0x30 */
    FEnum_grLfbConstantDepth,                /* 0x31 */
    FEnum_grLfbLock,                         /* 0x32 */
    FEnum_grLfbReadRegion,                   /* 0x33 */
    FEnum_grLfbUnlock,                       /* 0x34 */
    FEnum_grLfbWriteColorFormat,             /* 0x35 */
    FEnum_grLfbWriteColorSwizzle,            /* 0x36 */
    FEnum_grLfbWriteRegion,                  /* 0x37 */
    FEnum_grRenderBuffer,                    /* 0x38 */
    FEnum_grResetTriStats,                   /* 0x39 */
    FEnum_grSplash,                          /* 0x3a */
    FEnum_grSstConfigPipeline,               /* 0x3b */
    FEnum_grSstControl,                      /* 0x3c */
    FEnum_grSstIdle,                         /* 0x3d */
    FEnum_grSstIsBusy,                       /* 0x3e */
    FEnum_grSstOrigin,                       /* 0x3f */
    FEnum_grSstPerfStats,                    /* 0x40 */
    FEnum_grSstQueryBoards,                  /* 0x41 */
    FEnum_grSstQueryHardware,                /* 0x42 */
    FEnum_grSstResetPerfStats,               /* 0x43 */
    FEnum_grSstScreenHeight,                 /* 0x44 */
    FEnum_grSstScreenWidth,                  /* 0x45 */
    FEnum_grSstSelect,                       /* 0x46 */
    FEnum_grSstStatus,                       /* 0x47 */
    FEnum_grSstVRetraceOn,                   /* 0x48 */
    FEnum_grSstVidMode,                      /* 0x49 */
    FEnum_grSstVideoLine,                    /* 0x4a */
    FEnum_grSstWinClose,                     /* 0x4b */
    FEnum_grSstWinOpen,                      /* 0x4c */
    FEnum_grTexCalcMemRequired,              /* 0x4d */
    FEnum_grTexClampMode,                    /* 0x4e */
    FEnum_grTexCombine,                      /* 0x4f */
    FEnum_grTexCombineFunction,              /* 0x50 */
    FEnum_grTexDetailControl,                /* 0x51 */
    FEnum_grTexDownloadMipMap,               /* 0x52 */
    FEnum_grTexDownloadMipMapLevel,          /* 0x53 */
    FEnum_grTexDownloadMipMapLevelPartial,   /* 0x54 */
    FEnum_grTexDownloadTable,                /* 0x55 */
    FEnum_grTexDownloadTablePartial,         /* 0x56 */
    FEnum_grTexFilterMode,                   /* 0x57 */
    FEnum_grTexLodBiasValue,                 /* 0x58 */
    FEnum_grTexMaxAddress,                   /* 0x59 */
    FEnum_grTexMinAddress,                   /* 0x5a */
    FEnum_grTexMipMapMode,                   /* 0x5b */
    FEnum_grTexMultibase,                    /* 0x5c */
    FEnum_grTexMultibaseAddress,             /* 0x5d */
    FEnum_grTexNCCTable,                     /* 0x5e */
    FEnum_grTexSource,                       /* 0x5f */
    FEnum_grTexTextureMemRequired,           /* 0x60 */
    FEnum_grTriStats,                        /* 0x61 */
    FEnum_gu3dfGetInfo,                      /* 0x62 */
    FEnum_gu3dfLoad,                         /* 0x63 */
    FEnum_guAADrawTriangleWithClip,          /* 0x64 */
    FEnum_guAlphaSource,                     /* 0x65 */
    FEnum_guColorCombineFunction,            /* 0x66 */
    FEnum_guDrawPolygonVertexListWithClip,   /* 0x67 */
    FEnum_guDrawTriangleWithClip,            /* 0x68 */
    FEnum_guEncodeRLE16,                     /* 0x69 */
    FEnum_guEndianSwapBytes,                 /* 0x6a */
    FEnum_guEndianSwapWords,                 /* 0x6b */
    FEnum_guFogGenerateExp2,                 /* 0x6c */
    FEnum_guFogGenerateExp,                  /* 0x6d */
    FEnum_guFogGenerateLinear,               /* 0x6e */
    FEnum_guFogTableIndexToW,                /* 0x6f */
    FEnum_guMPDrawTriangle,                  /* 0x70 */
    FEnum_guMPInit,                          /* 0x71 */
    FEnum_guMPTexCombineFunction,            /* 0x72 */
    FEnum_guMPTexSource,                     /* 0x73 */
    FEnum_guMovieSetName,                    /* 0x74 */
    FEnum_guMovieStart,                      /* 0x75 */
    FEnum_guMovieStop,                       /* 0x76 */
    FEnum_guTexAllocateMemory,               /* 0x77 */
    FEnum_guTexChangeAttributes,             /* 0x78 */
    FEnum_guTexCombineFunction,              /* 0x79 */
    FEnum_guTexCreateColorMipMap,            /* 0x7a */
    FEnum_guTexDownloadMipMap,               /* 0x7b */
    FEnum_guTexDownloadMipMapLevel,          /* 0x7c */
    FEnum_guTexGetCurrentMipMap,             /* 0x7d */
    FEnum_guTexGetMipMapInfo,                /* 0x7e */
    FEnum_guTexMemQueryAvail,                /* 0x7f */
    FEnum_guTexMemReset,                     /* 0x80 */
    FEnum_guTexSource,                       /* 0x81 */
    FEnum_grLfbBegin,                        /* 0x82 */
    FEnum_grLfbBypassMode,                   /* 0x83 */
    FEnum_grLfbEnd,                          /* 0x84 */
    FEnum_grLfbGetReadPtr,                   /* 0x85 */
    FEnum_grLfbGetWritePtr,                  /* 0x86 */
    FEnum_grLfbOrigin,                       /* 0x87 */
    FEnum_grLfbWriteMode,                    /* 0x88 */
    FEnum_grSstOpen,                         /* 0x89 */
    FEnum_grSstPassthruMode,                 /* 0x8a */
    FEnum_guFbReadRegion,                    /* 0x8b */
    FEnum_guFbWriteRegion,                   /* 0x8c */
    FEnum_grSplash0,                         /* 0x8d */
    FEnum_grCoordinateSpace,                 /* 0x8e */
    FEnum_grDepthRange,                      /* 0x8f */
    FEnum_grDisable,                         /* 0x90 */
    FEnum_grDrawVertexArray,                 /* 0x91 */
    FEnum_grDrawVertexArrayContiguous,       /* 0x92 */
    FEnum_grEnable,                          /* 0x93 */
    FEnum_grFinish,                          /* 0x94 */
    FEnum_grFlush,                           /* 0x95 */
    FEnum_grGet,                             /* 0x96 */
    FEnum_grGetProcAddress,                  /* 0x97 */
    FEnum_grGetString,                       /* 0x98 */
    FEnum_grGlideGetVertexLayout,            /* 0x99 */
    FEnum_grGlideSetVertexLayout,            /* 0x9a */
    FEnum_grLfbWriteRegion3x,                /* 0x9b */
    FEnum_grLoadGammaTable,                  /* 0x9c */
    FEnum_grQueryResolutions,                /* 0x9d */
    FEnum_grReset,                           /* 0x9e */
    FEnum_grSelectContext,                   /* 0x9f */
    FEnum_grSstWinClose3x,                   /* 0xa0 */
    FEnum_grTexDownloadTable3x,              /* 0xa1 */
    FEnum_grTexDownloadTablePartial3x,       /* 0xa2 */
    FEnum_grTexNCCTable3x,                   /* 0xa3 */
    FEnum_grVertexLayout,                    /* 0xa4 */
    FEnum_grViewport,                        /* 0xa5 */
    FEnum_guGammaCorrectionRGB,              /* 0xa6 */
    FEnum_grGetGammaTableExt,
    FEnum_grChromaRangeModeExt,
    FEnum_grChromaRangeExt,
    FEnum_grTexChromaModeExt,
    FEnum_grTexChromaRangeExt,
    FEnum_grColorCombineExt,
    FEnum_grAlphaCombineExt,
    FEnum_grTexColorCombineExt,
    FEnum_grTexAlphaCombineExt,
    FEnum_grAlphaBlendFunctionExt,
    FEnum_grConstantColorValueExt,
    FEnum_grColorMaskExt,
    FEnum_grTBufferWriteMaskExt,
    FEnum_grBufferClearExt,
    FEnum_grTextureBufferExt,
    FEnum_grTextureAuxBufferExt,
    FEnum_grAuxBufferExt,
    FEnum_grStencilFuncExt,
    FEnum_grStencilMaskExt,
    FEnum_grStencilOpExt,
    FEnum_grLfbConstantStencilExt,
    FEnum_grSstWinOpenExt,
    FEnum_zzG2xFuncEnum_max,
} G2xFuncEnum;

/* End - generated by mkgfuncs */


#define PAGE_SIZE       0x1000

#define GLIDE_LFB_BASE	0xfb000000
#define GLIDE_FIFO_BASE 0xfb500000
#define MBUFO_BASE      (0xE8U << 24)
#define MBUFO_SIZE      (0x02U << 24)

#define ALIGNED(x)                              ((x%8)?(((x>>3)+1)<<3):x)
#define ALIGNBO(x)                              ((x%16)?(((x>>4)+1)<<4):x)
#define SHLFB_SIZE                              0x300000
#define GRSHM_SIZE                              0x300000
#define GRLFB_SIZE                              0x200000
#define FIRST_FIFO                              24
#define MAX_FIFO                                0x10000
#define MAX_DATA                                ((GRSHM_SIZE - (4*MAX_FIFO) - (64*1024)) >> 2)
#define G3_LOD_TRANSLATE(lod)                   (0x8-lod)
#define G3_ASPECT_TRANSLATE(aspect)             (0x3-(aspect))
#define GR_MIPMAPLEVELMASK_BOTH                 (0x3)
#define GR_PARAM_IDX(p)                         ((p&0xF0U)? ((p&0x01U)? ((p>>4) + 6):((p>>4) + GR_PARAM_Q)):(p-1))
#define GR_VERTEX_PARAMETER             0x29
#define GR_FOG_TABLE_ENTRIES            0x04
#define GR_GLIDE_STATE_SIZE             0x06
#define GR_GLIDE_VERTEXLAYOUT_SIZE      0x07
#define GR_NUM_BOARDS                   0x0f
#define GR_EXTENSION                    0xa0
#define GR_HARDWARE                     0xa1
#define GR_RENDERER                     0xa2
#define GR_VENDOR                       0xa3
#define GR_VERSION                      0xa4

/* Parameters for strips */
#define GR_PARAM_XY       0x01
#define GR_PARAM_Z        0x02
#define GR_PARAM_W        0x03
#define GR_PARAM_Q        0x04
#define GR_PARAM_FOG_EXT  0x05
#define GR_PARAM_A        0x10
#define GR_PARAM_RGB      0x20
#define GR_PARAM_PARGB    0x30
#define GR_PARAM_ST0      0x40
#define GR_PARAM_ST1      GR_PARAM_ST0+1
#define GR_PARAM_Q0       0x50
#define GR_PARAM_Q1       GR_PARAM_Q0+1

#define GR_PARAM_DISABLE  0x00
#define GR_PARAM_ENABLE   0x01
#define GLIDEPT_CRASH_RC  3000

#ifdef QEMU_OSDEP_H
#if (((QEMU_VERSION_MAJOR << 8) | \
      (QEMU_VERSION_MINOR << 4) | \
       QEMU_VERSION_MICRO) < 0x710)
#define qemu_real_host_page_size()      qemu_real_host_page_size
#define qemu_real_host_page_mask()      qemu_real_host_page_mask
#endif
#endif /* QEMU_OSDEP_H */

#define COMMIT_SIGN \
    const char rev_[ALIGNED(1)]
