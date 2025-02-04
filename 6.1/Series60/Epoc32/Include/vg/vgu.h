/*------------------------------------------------------------------------
 * 
 * Hybrid's OpenVG API
 * -------------------------------
 *
 * (C) 2005 Khronos Group -- original code 
 *                          (OpenVG Specification Final Draft 2)
 * (C) 2005-2006 Hybrid Graphics, Ltd.
 * All Rights Reserved.
 *
 * This file consists of source code based on Khronos Group APIs with additional
 * source code and modifications by Hybrid Graphics Ltd. The modified 
 * file is distributed under the terms of the accompanying End User 
 * License Agreement (EULA). By using this file you agree to be bound 
 * by the terms of the EULA 
 *
 * Use and/or disclosure outside these terms may result in 
 * irreparable harm to Hybrid Graphics and legal action against 
 * the party in breach.
 *
 * The added and modified source code is distributed on an "as is" 
 * basis, with all express and implied warranties and conditions 
 * disclaimed, including, without limitation, any implied warranties 
 * and conditions of merchantability, satisfactory quality, fitness 
 * for a particular purpose, and non-infringement.
 *
 * $Id: //hybrid/products/openvg/1.3/openvg/include/vg/vgu.h#1 $
 * $Date: 2006/03/06 $
 * $Author: sampo $ *
 *
 *//**
 * \file
 * \brief   Public VGU API
 *//*-------------------------------------------------------------------*/


#ifndef VGU_H
#define VGU_H

#ifdef __cplusplus 
extern "C" { 
#endif

#include <vg/openvg.h>

#define VGU_VERSION_1_0 1

#ifndef VGU_API_CALL
#   if defined VG_API_CALL
#       define VGU_API_CALL VG_API_CALL
#   else
#       define VGU_API_CALL extern
#   endif
#endif

#ifndef VGU_FP_CALL
#   if defined VG_FP_CALL
#       define VGU_FP_CALL VG_FP_CALL
#   else
#       define VGU_FP_CALL
#   endif
#endif

typedef enum {
  VGU_NO_ERROR                                 = 0,
  VGU_BAD_HANDLE_ERROR                         = 0xF000,
  VGU_ILLEGAL_ARGUMENT_ERROR                   = 0xF001,
  VGU_OUT_OF_MEMORY_ERROR                      = 0xF002,
  VGU_PATH_CAPABILITY_ERROR                    = 0xF003,
  VGU_BAD_WARP_ERROR                           = 0xF004
} VGUErrorCode;

typedef enum {
  VGU_ARC_OPEN  = 0xF100,
  VGU_ARC_CHORD = 0xF101,
  VGU_ARC_PIE   = 0xF102
} VGUArcType;

VGU_API_CALL VGUErrorCode vguLine(VGPath path,
                  VGfloat x0, VGfloat y0,
                  VGfloat x1, VGfloat y1) VGU_FP_CALL;

VGU_API_CALL VGUErrorCode vguPolygon(VGPath path,
                    const VGfloat * points, VGint count,
                    VGboolean closed);

VGU_API_CALL VGUErrorCode vguRect(VGPath path,
                 VGfloat x, VGfloat y,
                 VGfloat width, VGfloat height) VGU_FP_CALL;

VGU_API_CALL VGUErrorCode vguRoundRect(VGPath path,
                      VGfloat x, VGfloat y,
                      VGfloat width, VGfloat height,
                      VGfloat arcWidth, VGfloat arcHeight) VGU_FP_CALL;
  
VGU_API_CALL VGUErrorCode vguEllipse(VGPath path,
                    VGfloat cx, VGfloat cy,
                    VGfloat width, VGfloat height) VGU_FP_CALL;

VGU_API_CALL VGUErrorCode vguArc(VGPath path,
                VGfloat x, VGfloat y,
                VGfloat width, VGfloat height,
                VGfloat startAngle, VGfloat angleExtent,
                VGUArcType arcType) VGU_FP_CALL;

VGU_API_CALL VGUErrorCode vguComputeWarpQuadToSquare(VGfloat sx0, VGfloat sy0,
                                                    VGfloat sx1, VGfloat sy1,
                                                    VGfloat sx2, VGfloat sy2,
                                                    VGfloat sx3, VGfloat sy3,
                                                    VGfloat * matrix) VGU_FP_CALL;

VGU_API_CALL VGUErrorCode vguComputeWarpSquareToQuad(VGfloat dx0, VGfloat dy0,
                                                    VGfloat dx1, VGfloat dy1,
                                                    VGfloat dx2, VGfloat dy2,
                                                    VGfloat dx3, VGfloat dy3,
                                                    VGfloat * matrix) VGU_FP_CALL;

VGU_API_CALL VGUErrorCode vguComputeWarpQuadToQuad(VGfloat sx0, VGfloat sy0,
                                                  VGfloat sx1, VGfloat sy1,
                                                  VGfloat sx2, VGfloat sy2,
                                                  VGfloat sx3, VGfloat sy3,
                                                  VGfloat dx0, VGfloat dy0,
                                                  VGfloat dx1, VGfloat dy1,
                                                  VGfloat dx2, VGfloat dy2,
                                                  VGfloat dx3, VGfloat dy3,
                                                  VGfloat * matrix) VGU_FP_CALL;

#ifdef __cplusplus 
} /* extern "C" */
#endif

#endif /* #ifndef VGU_H */
