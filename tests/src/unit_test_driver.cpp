/* This file is part of PyMesh. Copyright (c) 2017 by Qingnan Zhou */
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "MeshTest.h"
#include "MeshFactoryTest.h"
#include "IO/OBJParserTest.h"
#include "IO/OBJWriterTest.h"
#include "IO/OFFParserTest.h"
#include "IO/OFFWriterTest.h"
#include "IO/MEDITWriterTest.h"
#include "IO/MSHParserTest.h"
#include "IO/MSHWriterTest.h"
#include "IO/PLYParserTest.h"
#include "IO/PLYWriterTest.h"
#include "IO/STLParserTest.h"
#include "IO/STLWriterTest.h"
#include "Math/ZSparseMatrixTest.h"
#include "Math/MatrixUtilsTest.h"
#include "Misc/TripletTest.h"
#include "Misc/TripletMapTest.h"
#include "Misc/MultipletMapTest.h"
#include "Misc/TriBox2DTest.h"
#include "Misc/MultipletTest.h"
#include "Misc/HashGridTest.h"
#include "Misc/HashKeyTest.h"
#include "Misc/MatrixIOTest.h"
#include "Attributes/EdgeDihedralAngleAttributeTest.h"
#include "Attributes/FaceAreaAttributeTest.h"
#include "Attributes/FaceAspectRatioAttributeTest.h"
#include "Attributes/FaceCentroidAttributeTest.h"
#include "Attributes/FaceCircumCenterAttributeTest.h"
#include "Attributes/FaceCircumRadiusAttributeTest.h"
#include "Attributes/FaceFrameAttributeTest.h"
#include "Attributes/FaceIncircleCenterAttributeTest.h"
#include "Attributes/FaceIncircleRadiusAttributeTest.h"
#include "Attributes/FaceIndexAttributeTest.h"
#include "Attributes/FaceNormalAttributeTest.h"
#include "Attributes/FaceVoronoiAreaAttributeTest.h"
#include "Attributes/VoxelCentroidAttributeTest.h"
#include "Attributes/VoxelCircumCenterAttributeTest.h"
#include "Attributes/VoxelCircumRadiusAttributeTest.h"
#include "Attributes/VoxelDihedralAngleAttributeTest.h"
#include "Attributes/VoxelEdgeRatioAttributeTest.h"
#include "Attributes/VoxelFaceIndexAttributeTest.h"
#include "Attributes/VoxelIncenterAttributeTest.h"
#include "Attributes/VoxelIndexAttributeTest.h"
#include "Attributes/VoxelInradiusAttributeTest.h"
#include "Attributes/VoxelVolumeAttributeTest.h"
#include "Attributes/VertexIndexAttributeTest.h"
#include "Attributes/VertexGaussianCurvatureAttributeTest.h"
#include "Attributes/VertexNormalAttributeTest.h"
#include "Attributes/VertexMeanCurvatureAttributeTest.h"
#include "Attributes/VertexLaplacianAttributeTest.h"
#include "Attributes/VertexValanceAttributeTest.h"
#include "Attributes/VertexVolumeAttributeTest.h"

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
