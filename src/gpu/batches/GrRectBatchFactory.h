/*
 * Copyright 2015 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef GrRectBatchFactory_DEFINED
#define GrRectBatchFactory_DEFINED

#include "GrColor.h"

class GrBatch;
class SkMatrix;
struct SkRect;

/*
 * A factory for returning batches which can draw rectangles.  Right now this only handles non-AA
 * rects
 */
namespace GrRectBatchFactory {

GrBatch* CreateFillBW(GrColor color,
                      const SkMatrix& viewMatrix,
                      const SkRect& rect,
                      const SkRect* localRect,
                      const SkMatrix* localMatrix);

GrBatch* CreateStrokeBW(GrColor color,
                        const SkMatrix& viewMatrix,
                        const SkRect& rect,
                        SkScalar strokeWidth,
                        bool snapToPixelCenters);

};

#endif
