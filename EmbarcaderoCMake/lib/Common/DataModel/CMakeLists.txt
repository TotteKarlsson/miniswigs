set(Module_SRCS
  vtkAbstractCellLinks.cxx
  vtkAbstractCellLocator.cxx
  vtkAbstractPointLocator.cxx
  vtkAdjacentVertexIterator.cxx
  vtkAMRBox.cxx
  vtkAMRUtilities.cxx
  vtkAnimationScene.cxx
  vtkAnnotation.cxx
  vtkAnnotationLayers.cxx
  vtkArrayData.cxx
  vtkAttributesErrorMetric.cxx
  vtkBiQuadraticQuad.cxx
  vtkBiQuadraticQuadraticHexahedron.cxx
  vtkBiQuadraticQuadraticWedge.cxx
  vtkBiQuadraticTriangle.cxx
  vtkBox.cxx
  vtkBSPCuts.cxx
  vtkBSPIntersections.cxx
  vtkCell3D.cxx
  vtkCellArray.cxx
  vtkCell.cxx
  vtkCellData.cxx
  vtkCellIterator.cxx
  vtkCellLinks.cxx
  vtkCellLocator.cxx
  vtkCellTypes.cxx
  vtkCompositeDataSet.cxx
  vtkCompositeDataIterator.cxx
  vtkCone.cxx
  vtkConvexPointSet.cxx
  vtkCubicLine.cxx
  vtkCylinder.cxx
  vtkDataSetCellIterator.cxx
  vtkDataObjectCollection.cxx
  vtkDataObject.cxx
  vtkDataObjectTypes.cxx
  vtkDataObjectTree.cxx
  vtkDataObjectTreeIterator.cxx
  vtkDataSetAttributes.cxx
  vtkDataSetCollection.cxx
  vtkDataSet.cxx
  vtkDirectedAcyclicGraph.cxx
  vtkDirectedGraph.cxx
  vtkDistributedGraphHelper.cxx
  vtkEdgeListIterator.cxx
  vtkEdgeTable.cxx
  vtkEmptyCell.cxx
  vtkExtractStructuredGridHelper.cxx
  vtkFieldData.cxx
  vtkGenericAdaptorCell.cxx
  vtkGenericAttributeCollection.cxx
  vtkGenericAttribute.cxx
  vtkGenericCell.cxx
  vtkGenericCellIterator.cxx
  vtkGenericCellTessellator.cxx
  vtkGenericDataSet.cxx
  vtkGenericEdgeTable.cxx
  vtkGenericInterpolatedVelocityField.cxx
  vtkGenericPointIterator.cxx
  vtkGenericSubdivisionErrorMetric.cxx
  vtkGeometricErrorMetric.cxx
  vtkGraph.cxx
  vtkGraphEdge.cxx
  vtkGraphInternals.cxx
  vtkHexagonalPrism.cxx
  vtkHexahedron.cxx
  vtkHierarchicalBoxDataIterator.cxx
  vtkHierarchicalBoxDataSet.cxx
  vtkHyperOctreeCursor.cxx
  vtkHyperOctree.cxx
  vtkHyperOctreePointsGrabber.cxx
  vtkHyperTree.cxx
  vtkHyperTreeCursor.cxx
  vtkHyperTreeGrid.cxx
  vtkImageData.cxx
  vtkImageIterator.cxx
  vtkImplicitBoolean.cxx
  vtkImplicitDataSet.cxx
  vtkImplicitFunctionCollection.cxx
  vtkImplicitFunction.cxx
  vtkImplicitHalo.cxx
  vtkImplicitSelectionLoop.cxx
  vtkImplicitSum.cxx
  vtkImplicitVolume.cxx
  vtkImplicitWindowFunction.cxx
  vtkIncrementalOctreeNode.cxx
  vtkIncrementalOctreePointLocator.cxx
  vtkIncrementalPointLocator.cxx
  vtkInEdgeIterator.cxx
  vtkInformationQuadratureSchemeDefinitionVectorKey.cxx
  vtkIterativeClosestPointTransform.cxx
  vtkKdNode.cxx
  vtkKdTree.cxx
  vtkKdTreePointLocator.cxx
  vtkLine.cxx
  vtkLocator.cxx
  vtkMappedUnstructuredGrid.txx
  vtkMappedUnstructuredGridCellIterator.txx
  vtkMarchingSquaresLineCases.cxx
  vtkMarchingCubesTriangleCases.cxx
  vtkMeanValueCoordinatesInterpolator.cxx
  vtkMergePoints.cxx
  vtkMultiBlockDataSet.cxx
  vtkMultiPieceDataSet.cxx
  vtkMutableDirectedGraph.cxx
  vtkMutableUndirectedGraph.cxx
  vtkNonLinearCell.cxx
  vtkNonMergingPointLocator.cxx
  vtkOctreePointLocator.cxx
  vtkOctreePointLocatorNode.cxx
  vtkOrderedTriangulator.cxx
  vtkOutEdgeIterator.cxx
  vtkPath.cxx
  vtkPentagonalPrism.cxx
  vtkPerlinNoise.cxx
  vtkPiecewiseFunction.cxx
  vtkPixel.cxx
  vtkPixelExtent.cxx
  vtkPixelTransfer.cxx
  vtkPlaneCollection.cxx
  vtkPlane.cxx
  vtkPlanes.cxx
  vtkPlanesIntersection.cxx
  vtkPointData.cxx
  vtkPointLocator.cxx
  vtkPointSet.cxx
  vtkPointSetCellIterator.cxx
  vtkPointsProjectedHull.cxx
  vtkPolyDataCollection.cxx
  vtkPolyData.cxx
  vtkPolygon.cxx
  vtkPolyhedron.cxx
  vtkPolyLine.cxx
  vtkPolyPlane.cxx
  vtkPolyVertex.cxx
  vtkPyramid.cxx
  vtkQuad.cxx
  vtkQuadraticEdge.cxx
  vtkQuadraticHexahedron.cxx
  vtkQuadraticLinearQuad.cxx
  vtkQuadraticLinearWedge.cxx
  vtkQuadraticPolygon.cxx
  vtkQuadraticPyramid.cxx
  vtkQuadraticQuad.cxx
  vtkQuadraticTetra.cxx
  vtkQuadraticTriangle.cxx
  vtkQuadraticWedge.cxx
  vtkQuadratureSchemeDefinition.cxx
  vtkQuadric.cxx
  vtkRectilinearGrid.cxx
  vtkReebGraph.cxx
  vtkReebGraphSimplificationMetric.cxx
  vtkSelection.cxx
  vtkSelectionNode.cxx
  vtkSimpleCellTessellator.cxx
  vtkSmoothErrorMetric.cxx
  vtkSphere.cxx
  vtkSpline.cxx
  vtkStaticCellLinks.cxx
  vtkStaticCellLinksTemplate.txx
#  vtkStaticPointLocator.cxx
  vtkStructuredData.cxx
  vtkStructuredExtent.cxx
  vtkStructuredGrid.cxx
  vtkStructuredPointsCollection.cxx
  vtkStructuredPoints.cxx
  vtkSuperquadric.cxx
  vtkTable.cxx
  vtkTensor.cxx
  vtkTetra.cxx
  vtkTreeBFSIterator.cxx
  vtkTree.cxx
  vtkTreeDFSIterator.cxx
  vtkTriangle.cxx
  vtkTriangleStrip.cxx
  vtkTriQuadraticHexahedron.cxx
  vtkUndirectedGraph.cxx
  vtkUniformGrid.cxx
  vtkUnstructuredGrid.cxx
  vtkUnstructuredGridBase.cxx
  vtkUnstructuredGridCellIterator.cxx
  vtkVertex.cxx
  vtkVertexListIterator.cxx
  vtkVoxel.cxx
  vtkWedge.cxx
  vtkXMLDataElement.cxx
  vtkTreeIterator.cxx
  vtkBoundingBox.cxx
  vtkAtom.cxx
  vtkBond.cxx
  vtkMolecule.cxx
  vtkAbstractElectronicData.cxx
  vtkCellType.h

  # Header only classes
  vtkDataArrayDispatcher.h
  vtkDispatcher.h
  vtkDispatcher_Private.h
  vtkDoubleDispatcher.h
  vtkVector.h
  vtkVectorOperators.h
  vtkColor.h
  vtkRect.h

  # New classes for AMR
  vtkNonOverlappingAMR.cxx
  vtkOverlappingAMR.cxx
  vtkAMRInformation.cxx
  vtkAMRDataInternals.cxx
  vtkUniformGridAMR.cxx
  vtkUniformGridAMRDataIterator.cxx
  )

set(${vtk-module}_HDRS
  vtkCellType.h
  vtkMappedUnstructuredGrid.h
  vtkMappedUnstructuredGridCellIterator.h
  vtkStaticCellLinksTemplate.h
  )

set_source_files_properties(
  vtkAbstractCellLinks
  vtkAbstractCellLocator
  vtkAbstractPointLocator
  vtkCell
  vtkCell3D
  vtkCellIterator
  vtkCompositeDataIterator
  vtkCompositeDataSet
  vtkDataObjectTree
  vtkAbstractElectronicData
  vtkDataSet
  vtkDataSetGhostGenerator
  vtkDistributedGraphHelper
  vtkGenericAttribute
  vtkGenericAdaptorCell
  vtkGenericCellIterator
  vtkGenericCellTessellator
  vtkGenericDataSet
  vtkGenericPointIterator
  vtkGenericSubdivisionErrorMetric
  vtkGraph
  vtkHyperOctreeCursor
  vtkHyperOctreePointsGrabber
  vtkHyperTree
  vtkHyperTreeCursor
  vtkImplicitFunction
  vtkIncrementalPointLocator
  vtkInformationQuadratureSchemeDefinitionVectorKey
  vtkLocator
  vtkNonLinearCell
  vtkPointSet
  vtkSpline
  vtkStructuredData
  vtkTreeIterator
  vtkUnstructuredGridBase
  ABSTRACT
  )

set_source_files_properties(
  vtkAMRBox
  vtkAtom
  vtkBond
  vtkBoundingBox
  vtkCellType
  vtkDataArrayDispatcher
  vtkDispatcher_Private
  vtkDispatcher
  vtkDoubleDispatcher
  vtkMappedUnstructuredGrid.txx
  vtkMappedUnstructuredGridCellIterator.txx
  vtkMarchingSquaresLineCases
  vtkMarchingCubesTriangleCases
  vtkImageIterator
  vtkImageProgressIterator
  vtkPixelExtent.cxx
  vtkPixelTransfer.cxx
  vtkStaticCellLinksTemplate.txx
  vtkVector
  vtkColor
  vtkRect
  vtkVectorOperators
  vtkAMRDataInternals
  WRAP_EXCLUDE
  )

set_source_files_properties(
  vtkDispatcher_Private
  PROPERTIES WRAP_EXCLUDE_PYTHON 1
  )

vtk_module_library(vtkCommonDataModel ${Module_SRCS})
