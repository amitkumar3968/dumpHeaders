/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKModelObject.h>

#import "VKAnnotationModelDelegate.h"
#import "VKCalloutControllerDelegate.h"
#import "VKLabelModelDelegate.h"
#import "VKOverlayContainerDelegate.h"
#import "VKTileProviderClient.h"
#import "VKTrafficIncidentsMapModelDelegate.h"

@class NSArray, NSMapTable, NSMutableArray, NSSet, UIView<VKInteractiveMap>, VKAnimation, VKAnnotationMarker, VKAnnotationModel, VKBuildingFootprintMapModel, VKCalloutController, VKDebugModel, VKGridModel, VKGroundCoverMapModel, VKLabelFeaturePool, VKLabelMarker, VKLabelModel, VKLoupeMapTileModel, VKMapRasterizer, VKMercatorTerrainHeightCache, VKOverlayContainerModel, VKOverlayTileSource, VKPolygonMapModel, VKPolylineOverlayPainter, VKRasterMapModel, VKRasterTrafficMapModel, VKRealisticMapModel, VKRoadMapModel, VKRoadTrafficMapModel, VKSkyModel, VKStylesheet, VKTileProvider, VKTrafficIncident, VKTrafficIncidentsMapModel, VKTrafficTileSource;

__attribute__((visibility("hidden")))
@interface VKMapModel : VKModelObject <VKAnnotationModelDelegate, VKOverlayContainerDelegate, VKCalloutControllerDelegate, VKLabelModelDelegate, VKTrafficIncidentsMapModelDelegate, VKTileProviderClient>
{
    int _tileSize;
    VKTileProvider *_tileProviders[3];
    int _mapMode;
    int _desiredMapMode;
    BOOL _transitioningToNav;
    char _activeMapLayers[3][26];
    NSMapTable *_layerToSourceMaps[3];
    VKTrafficTileSource *_trafficSource;
    VKOverlayTileSource *_overlayTileSource;
    VKOverlayTileSource *_realisticOverlayTileSource;
    VKGridModel *_gridModel;
    VKSkyModel *_skyModel;
    VKLabelModel *_labelModel;
    VKRasterMapModel *_rasterModel;
    VKRasterMapModel *_standardRasterModel;
    VKGroundCoverMapModel *_groundCoverModel;
    VKRasterTrafficMapModel *_rasterTrafficModel;
    VKPolygonMapModel *_polygonModel;
    VKRoadMapModel *_roadModel;
    VKRoadTrafficMapModel *_roadTrafficModel;
    VKRealisticMapModel *_realisticModel;
    VKBuildingFootprintMapModel *_buildingFootprintModel;
    VKTrafficIncidentsMapModel *_trafficIncidentsModel;
    VKAnnotationModel *_annotationModel;
    VKOverlayContainerModel *_overlayContainerModel;
    VKLoupeMapTileModel *_loupeModel;
    VKDebugModel *_debugModel;
    NSMapTable *_tileSources;
    NSMutableArray *_drawOrder;
    NSMutableArray *_mapLayerSubmodels;
    NSMutableArray *_mapTileSubmodels;
    VKCalloutController *_calloutController;
    VKStylesheet *_activeStylesheet;
    VKStylesheet *_defaultStylesheet;
    VKStylesheet *_hybridStylesheet;
    double _zoomLevel;
    int _mapType;
    int _loupeType;
    id <VKMapModelDelegate> _delegate;
    id <VKRoutePreloadSession> _routePreloadSession;
    VKLabelFeaturePool *_featurePool;
    BOOL _dynamicMapModesEnabled;
    BOOL _debugDynamicMapModesEnabled;
    BOOL _buildingsAreVisible;
    BOOL _fullyDrawn;
    BOOL _shouldNotifyFullyDrawn;
    BOOL _trafficEnabled;
    BOOL _shouldRasterize;
    int _loadingCount;
    BOOL _disableRoads;
    BOOL _disableLabels;
    BOOL _disablePolygons;
    BOOL _disableBuildingFootprints;
    BOOL _disableRasters;
    BOOL _enableBlackRoadLines;
    VKMapRasterizer *_rasterizer;
    VKRasterMapModel *_rasterViewer;
    int _annotationMarkerStyle;
    BOOL _limitingNavCameraHeight;
    VKAnimation *_modeTransitionAnimation;
    char _disableRoadClass[9];
    BOOL _shouldSplitRouteLine;
}

+ (unsigned long)numberOfRoadClasses;
+ (const char *)nameForRoadClass:(int)arg1;
@property(nonatomic) BOOL shouldSplitRouteLine; // @synthesize shouldSplitRouteLine=_shouldSplitRouteLine;
@property(nonatomic) BOOL limitingNavCameraHeight; // @synthesize limitingNavCameraHeight=_limitingNavCameraHeight;
@property(nonatomic, getter=isTrafficEnabled) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(readonly, nonatomic) BOOL buildingsAreVisible; // @synthesize buildingsAreVisible=_buildingsAreVisible;
@property(nonatomic) BOOL dynamicMapModesEnabled; // @synthesize dynamicMapModesEnabled=_dynamicMapModesEnabled;
@property(retain, nonatomic) VKStylesheet *stylesheet; // @synthesize stylesheet=_activeStylesheet;
@property(nonatomic) id <VKMapModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKBuildingFootprintMapModel *buildingFootprintModel; // @synthesize buildingFootprintModel=_buildingFootprintModel;
@property(readonly, nonatomic) int currentMapMode; // @synthesize currentMapMode=_mapMode;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) BOOL enableBlackRoadLines; // @synthesize enableBlackRoadLines=_enableBlackRoadLines;
@property(nonatomic) BOOL disableRasters; // @synthesize disableRasters=_disableRasters;
@property(nonatomic) BOOL disableBuildingFootprints; // @synthesize disableBuildingFootprints=_disableBuildingFootprints;
@property(nonatomic) BOOL disablePolygons; // @synthesize disablePolygons=_disablePolygons;
@property(nonatomic) BOOL disableLabels; // @synthesize disableLabels=_disableLabels;
@property(nonatomic) BOOL disableRoads; // @synthesize disableRoads=_disableRoads;
- (void)debugHighlightLabelAtScreenPoint:(struct CGPoint)arg1 viewTransform:(id)arg2;
@property(retain, nonatomic) id <VKRoutePreloadSession> routePreloadSession;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property(retain, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
- (void)setCurrentLocationText:(id)arg1;
- (void)setRouteUserOffset:(CDStruct_3f2a7a20)arg1;
- (id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned int)arg3;
- (void)_updateOverlayTileSource;
- (id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2;
- (BOOL)overlayContainerIsInRealisticMode:(id)arg1;
- (id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
@property(readonly, nonatomic) NSSet *persistentOverlays;
@property(readonly, nonatomic) NSArray *overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)annotationModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)annotationModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)calloutController:(id)arg1 didUpdateCalloutView:(id)arg2 forSource:(id)arg3 animated:(BOOL)arg4;
- (void)calloutController:(id)arg1 willShowCalloutView:(id)arg2 forSource:(id)arg3;
- (void)calloutController:(id)arg1 didUpdateCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)calloutController:(id)arg1 willShowCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)calloutController:(id)arg1 needsPanByPixelOffset:(struct CGPoint)arg2 relativeToScreenPoint:(struct CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (void)annotationModel:(id)arg1 annotationMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
@property(readonly, nonatomic) VKAnnotationMarker *selectedAnnotationMarker;
- (void)dismissExpandedCallout;
@property(nonatomic) Class calloutViewClass;
- (id)calloutPopoverController;
@property(nonatomic) UIView<VKInteractiveMap> *calloutContainerView;
- (void)incidentsModel:(id)arg1 didDeselectTrafficIncident:(id)arg2;
- (void)incidentsModel:(id)arg1 trafficIncident:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)incidentsModel:(id)arg1 willSelectTrafficIncident:(id)arg2;
@property(readonly, nonatomic) VKTrafficIncident *selectedTrafficIncident;
- (void)deselectTrafficIncidentAnimated:(BOOL)arg1;
- (void)selectTrafficIncident:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (id)trafficIncidentForSelectionAtPoint:(CDStruct_31142d93)arg1 canvasSize:(struct CGSize)arg2;
@property(nonatomic) BOOL labelMarkerSelectionEnabled;
@property(readonly, nonatomic) VKLabelMarker *selectedLabelMarker;
- (void)labelModel:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)labelModel:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)labelModel:(id)arg1 willSelectLabelMarker:(id)arg2;
- (void)deselectLabelMarkerAnimated:(BOOL)arg1;
- (void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 pointLabelsOnly:(BOOL)arg2;
- (id)annotationMarkerForSelectionAtPoint:(CDStruct_31142d93)arg1 avoidCurrent:(BOOL)arg2 canvasSize:(struct CGSize)arg3;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (id)annotationMarkerDeselectionCallback;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (void)deselectAnnotationMarker:(id)arg1 animated:(BOOL)arg2;
- (void)selectAnnotationMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (id)annotationMarkers;
- (void)didAddSubmodel:(id)arg1;
- (void)addSubmodel:(id)arg1;
@property(readonly, nonatomic) BOOL isFullyDrawn;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)recursiveDrawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)layoutSceneIfNeeded:(id)arg1 withContext:(id)arg2;
- (void)tileProviderNeedsUpdate:(id)arg1;
- (BOOL)tileProviderMayUseNetwork:(id)arg1;
- (void)_transitionFromMode:(int)arg1 toMode:(int)arg2 animated:(BOOL)arg3;
- (void)_updateZoomLevel:(id)arg1;
- (double)heightAtPoint:(CDStruct_31142d93)arg1;
- (int)maximumZoomLevelInView:(id)arg1;
- (int)minimumZoomLevelInView:(id)arg1;
- (int)tileSize;
- (void)_forceLayout;
- (void)shouldFlushCaches:(id)arg1;
- (void)flushCaches;
- (void)clearScene;
- (void)didTapZoom;
- (void)willTapZoom;
- (BOOL)isShowingNoDataPlaceholders;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initShouldRasterize:(BOOL)arg1;
- (id)initWithTransform:(const CDStruct_aa5aacbc *)arg1;
- (id)initWithTransform:(const CDStruct_aa5aacbc *)arg1 shouldRasterize:(BOOL)arg2;
- (void)activeTileGroupChanged:(id)arg1;
- (void)createTrafficTileSourceIfNecessary;
- (id)navTileSource;
- (void)stylesheetDidChange;
- (void)_setStylesheetFromMapType:(int)arg1;
- (id)loupeMapModel;
@property(nonatomic) int loupeType;
- (void)_tryTransitionAndPreloadIfNecessary:(id)arg1;
- (void)_mapConfigurationDidChange;
- (void)_updateRegularTileProviderMode;
- (void)didEndNavigation;
- (void)didBeginTransitionToNavigation;
- (void)preloadNavigationSceneResourcesWithContext:(id)arg1;
- (BOOL)writeVisibleTrafficTilesToDirectory:(id)arg1 error:(id *)arg2;
- (id)detailedDescription;
- (void)forceMapType:(int)arg1;
- (void)configureTileSources;
- (void)_deactivateModel:(id)arg1;
- (void)_activateModel:(id)arg1;
- (id)sourceForLayer:(unsigned int)arg1 mode:(int)arg2;
- (id)createSourceForLayer:(unsigned int)arg1 tileSet:(id)arg2 mode:(int)arg3;
- (int)tileStyleForMapLayer:(unsigned int)arg1;
@property(nonatomic) int labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
- (float)ppi;
- (float)scale;
- (void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2;
@property(nonatomic) BOOL disableRealisticLand;
@property(nonatomic) BOOL disableRealisticRoads;
@property(readonly, nonatomic) VKMercatorTerrainHeightCache *terrainHeightCache;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2;
@property(readonly, nonatomic) VKTileProvider *tileProvider;
- (void)foreachActiveLayer:(id)arg1;

@end
