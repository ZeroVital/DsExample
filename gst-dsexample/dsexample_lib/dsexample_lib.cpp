/**
 * Copyright (c) 2017-2020, NVIDIA CORPORATION.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "dsexample_lib.h"
#include <stdio.h>
#include <stdlib.h>
//#include <opencv2/opencv.hpp>
//#include "opencv2/cudaoptflow.hpp"
//#include <opencv2/cudaimgproc.hpp>
//#include <opencv2/cudawarping.hpp>

struct DsExampleCtx
{
    DsExampleInitParams initParams;
};

DsExampleCtx *
DsExampleCtxInit (DsExampleInitParams * initParams)
{
    DsExampleCtx *ctx = (DsExampleCtx *) calloc (1, sizeof (DsExampleCtx));
    ctx->initParams = *initParams;
    return ctx;
}

// In case of an actual processing library, processing on data will be completed
// in this function and output will be returned
DsExampleOutput *
DsExampleProcess (DsExampleCtx * ctx, unsigned char *data)
{
    DsExampleOutput *out =
        (DsExampleOutput*)calloc (1, sizeof (DsExampleOutput));

    if (data != NULL)
    {
        // Processing Test - ARA
//        cv::Point2f pt_rot(ctx->initParams.processingHeight/2., ctx->initParams.processingWidth/2.);
//        cv::Mat rot_mat(2, 3, CV_64F);
//        rot_mat = cv::getRotationMatrix2D(pt_rot, 10, 1.0); // 10° rotation for example

//        cv::cuda::GpuMat rot_gpumat = new cv::cuda::GpuMat(dsexample->processing_height, dsexample->processing_width, CV_8UC4,  (void *)surface->surfaceList[0].dataPtr);

//        cv::cuda::warpAffine(gpumat, out, rot_mat, gpumat->size());
    }

    return out;
}

void
DsExampleCtxDeinit (DsExampleCtx * ctx)
{
    free (ctx);
}
