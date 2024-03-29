/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString, VKPTrafficStyle;

__attribute__((visibility("hidden")))
@interface VKPStyleProperties : PBCodable
{
    CDStruct_d570ea55 _dropShadowOffsets;
    CDStruct_d570ea55 _fillDashPatterns;
    CDStruct_d570ea55 _genericShieldDropShadowOffsets;
    CDStruct_084d6ede _labelIconGradients;
    CDStruct_d570ea55 _strokeDashPatterns;
    float _arrowHeight;
    float _arrowHeightLarge;
    float _arrowHeightMedium;
    float _arrowHeightSmall;
    float _arrowSpacing;
    unsigned int _buildingFacadeColor;
    unsigned int _buildingFlatColor;
    unsigned int _buildingLandmarkColor;
    unsigned int _buildingOutlineColor;
    int _buildingRoofStyle;
    unsigned int _buildingTopColor;
    unsigned int _casingsColor;
    float _casingsHeight;
    float _casingsShadowRamp;
    float _casingsShadowWidth;
    float _casingsStrokeColor;
    float _casingsStrokeWidth;
    float _casingsWidth;
    unsigned int _dropShadowColor;
    unsigned int _fancyCasingsColor;
    unsigned int _fancyCasingsStrokeColor;
    float _fancyCasingsStrokeWidth;
    float _fancyCasingsWidth;
    unsigned int _fillColor;
    NSString *_fillTexture;
    int _fillTextureBlendMode;
    float _fillTextureOpacity;
    unsigned int _fillZIndex;
    unsigned int _genericShieldBackgroundColor;
    unsigned int _genericShieldBorderColor;
    unsigned int _genericShieldDropShadowColor;
    float _genericShieldDropShadowSize;
    unsigned int _genericShieldHaloColor;
    float _genericShieldHaloSize;
    int _genericShieldStyle;
    unsigned int _genericShieldTextColor;
    float _insetShadowAngle;
    unsigned int _insetShadowColor;
    float _insetShadowHeight;
    unsigned int _labelColor;
    unsigned int _labelDedupeRank;
    float _labelFontExpansion;
    float _labelFontExpansionLarge;
    float _labelFontExpansionMedium;
    float _labelFontExpansionSmall;
    NSString *_labelFontFamily;
    unsigned int _labelHaloColor;
    float _labelHaloSize;
    float _labelHaloSizeLarge;
    float _labelHaloSizeMedium;
    float _labelHaloSizeSmall;
    float _labelHeight;
    int _labelHeightCurve;
    float _labelHeightCurveLimit;
    float _labelHeightLarge;
    int _labelHeightLargeCurve;
    float _labelHeightLargeCurveLimit;
    float _labelHeightMedium;
    int _labelHeightMediumCurve;
    float _labelHeightMediumCurveLimit;
    float _labelHeightSmall;
    int _labelHeightSmallCurve;
    float _labelHeightSmallCurveLimit;
    NSString *_labelIcon;
    unsigned int _labelIconBadgeColor;
    unsigned int _labelIconGlyphColor;
    unsigned int _labelIconHaloColor;
    int _labelIconStyle;
    unsigned int _labelLineWrap;
    float _labelRoadRank;
    NSString *_labelShield;
    float _labelShieldRank;
    float _labelSpacing;
    float _labelSpacingLarge;
    float _labelSpacingMedium;
    float _labelSpacingSmall;
    int _labelTextVisibility;
    float _labelTiltLimit;
    float _layerShadowsRamp;
    float _layerShadowsTaper;
    float _layerShadowsWidth;
    int _lineDrawStyle;
    unsigned int _outerStrokeColor;
    float _outerStrokeWidth;
    int _polygonType;
    NSString *_secondFillTexture;
    int _secondFillTextureBlendMode;
    float _secondFillTextureOpacity;
    float _shieldTiltLimit;
    unsigned int _strokeColor;
    float _strokeWidth;
    int _strokeWidthCurve;
    float _strokeWidthCurveLimit;
    NSString *_thirdFillTexture;
    int _thirdFillTextureBlendMode;
    float _thirdFillTextureOpacity;
    VKPTrafficStyle *_trafficClosed;
    VKPTrafficStyle *_trafficFast;
    VKPTrafficStyle *_trafficMedium;
    VKPTrafficStyle *_trafficSlow;
    float _width;
    int _widthCurve;
    float _widthCurveLimit;
    float _widthDropoff;
    unsigned int _zIndex;
    BOOL _arrowVisible;
    BOOL _buildingOutlineVisible;
    BOOL _casingsVisible;
    BOOL _fancyCasingsVisible;
    BOOL _fillColorInterpolate;
    BOOL _labelRaisedInitial;
    BOOL _labelSmallCaps;
    BOOL _labelUpcase;
    BOOL _layerShadowsVisible;
    BOOL _onlyShowIfTappable;
    BOOL _shieldVisible;
    BOOL _showShieldTextAsLabel;
    BOOL _simpleLine;
    BOOL _strokeColorInterpolate;
    BOOL _trafficVisible;
    BOOL _visible;
    BOOL _yieldsToOnscreenLabels;
    struct {
        unsigned int arrowHeight:1;
        unsigned int arrowHeightLarge:1;
        unsigned int arrowHeightMedium:1;
        unsigned int arrowHeightSmall:1;
        unsigned int arrowSpacing:1;
        unsigned int buildingFacadeColor:1;
        unsigned int buildingFlatColor:1;
        unsigned int buildingLandmarkColor:1;
        unsigned int buildingOutlineColor:1;
        unsigned int buildingRoofStyle:1;
        unsigned int buildingTopColor:1;
        unsigned int casingsColor:1;
        unsigned int casingsHeight:1;
        unsigned int casingsShadowRamp:1;
        unsigned int casingsShadowWidth:1;
        unsigned int casingsStrokeColor:1;
        unsigned int casingsStrokeWidth:1;
        unsigned int casingsWidth:1;
        unsigned int dropShadowColor:1;
        unsigned int fancyCasingsColor:1;
        unsigned int fancyCasingsStrokeColor:1;
        unsigned int fancyCasingsStrokeWidth:1;
        unsigned int fancyCasingsWidth:1;
        unsigned int fillColor:1;
        unsigned int fillTextureBlendMode:1;
        unsigned int fillTextureOpacity:1;
        unsigned int fillZIndex:1;
        unsigned int genericShieldBackgroundColor:1;
        unsigned int genericShieldBorderColor:1;
        unsigned int genericShieldDropShadowColor:1;
        unsigned int genericShieldDropShadowSize:1;
        unsigned int genericShieldHaloColor:1;
        unsigned int genericShieldHaloSize:1;
        unsigned int genericShieldStyle:1;
        unsigned int genericShieldTextColor:1;
        unsigned int insetShadowAngle:1;
        unsigned int insetShadowColor:1;
        unsigned int insetShadowHeight:1;
        unsigned int labelColor:1;
        unsigned int labelDedupeRank:1;
        unsigned int labelFontExpansion:1;
        unsigned int labelFontExpansionLarge:1;
        unsigned int labelFontExpansionMedium:1;
        unsigned int labelFontExpansionSmall:1;
        unsigned int labelHaloColor:1;
        unsigned int labelHaloSize:1;
        unsigned int labelHaloSizeLarge:1;
        unsigned int labelHaloSizeMedium:1;
        unsigned int labelHaloSizeSmall:1;
        unsigned int labelHeight:1;
        unsigned int labelHeightCurve:1;
        unsigned int labelHeightCurveLimit:1;
        unsigned int labelHeightLarge:1;
        unsigned int labelHeightLargeCurve:1;
        unsigned int labelHeightLargeCurveLimit:1;
        unsigned int labelHeightMedium:1;
        unsigned int labelHeightMediumCurve:1;
        unsigned int labelHeightMediumCurveLimit:1;
        unsigned int labelHeightSmall:1;
        unsigned int labelHeightSmallCurve:1;
        unsigned int labelHeightSmallCurveLimit:1;
        unsigned int labelIconBadgeColor:1;
        unsigned int labelIconGlyphColor:1;
        unsigned int labelIconHaloColor:1;
        unsigned int labelIconStyle:1;
        unsigned int labelLineWrap:1;
        unsigned int labelRoadRank:1;
        unsigned int labelShieldRank:1;
        unsigned int labelSpacing:1;
        unsigned int labelSpacingLarge:1;
        unsigned int labelSpacingMedium:1;
        unsigned int labelSpacingSmall:1;
        unsigned int labelTextVisibility:1;
        unsigned int labelTiltLimit:1;
        unsigned int layerShadowsRamp:1;
        unsigned int layerShadowsTaper:1;
        unsigned int layerShadowsWidth:1;
        unsigned int lineDrawStyle:1;
        unsigned int outerStrokeColor:1;
        unsigned int outerStrokeWidth:1;
        unsigned int polygonType:1;
        unsigned int secondFillTextureBlendMode:1;
        unsigned int secondFillTextureOpacity:1;
        unsigned int shieldTiltLimit:1;
        unsigned int strokeColor:1;
        unsigned int strokeWidth:1;
        unsigned int strokeWidthCurve:1;
        unsigned int strokeWidthCurveLimit:1;
        unsigned int thirdFillTextureBlendMode:1;
        unsigned int thirdFillTextureOpacity:1;
        unsigned int width:1;
        unsigned int widthCurve:1;
        unsigned int widthCurveLimit:1;
        unsigned int widthDropoff:1;
        unsigned int zIndex:1;
        unsigned int arrowVisible:1;
        unsigned int buildingOutlineVisible:1;
        unsigned int casingsVisible:1;
        unsigned int fancyCasingsVisible:1;
        unsigned int fillColorInterpolate:1;
        unsigned int labelRaisedInitial:1;
        unsigned int labelSmallCaps:1;
        unsigned int labelUpcase:1;
        unsigned int layerShadowsVisible:1;
        unsigned int onlyShowIfTappable:1;
        unsigned int shieldVisible:1;
        unsigned int showShieldTextAsLabel:1;
        unsigned int simpleLine:1;
        unsigned int strokeColorInterpolate:1;
        unsigned int trafficVisible:1;
        unsigned int visible:1;
        unsigned int yieldsToOnscreenLabels:1;
    } _has;
}

@property(nonatomic) float arrowHeightLarge; // @synthesize arrowHeightLarge=_arrowHeightLarge;
@property(nonatomic) float arrowHeightMedium; // @synthesize arrowHeightMedium=_arrowHeightMedium;
@property(nonatomic) float arrowHeightSmall; // @synthesize arrowHeightSmall=_arrowHeightSmall;
@property(nonatomic) float labelSpacingLarge; // @synthesize labelSpacingLarge=_labelSpacingLarge;
@property(nonatomic) float labelSpacingMedium; // @synthesize labelSpacingMedium=_labelSpacingMedium;
@property(nonatomic) float labelSpacingSmall; // @synthesize labelSpacingSmall=_labelSpacingSmall;
@property(nonatomic) float labelFontExpansionLarge; // @synthesize labelFontExpansionLarge=_labelFontExpansionLarge;
@property(nonatomic) float labelFontExpansionMedium; // @synthesize labelFontExpansionMedium=_labelFontExpansionMedium;
@property(nonatomic) float labelFontExpansionSmall; // @synthesize labelFontExpansionSmall=_labelFontExpansionSmall;
@property(nonatomic) float labelHaloSizeLarge; // @synthesize labelHaloSizeLarge=_labelHaloSizeLarge;
@property(nonatomic) float labelHaloSizeMedium; // @synthesize labelHaloSizeMedium=_labelHaloSizeMedium;
@property(nonatomic) float labelHaloSizeSmall; // @synthesize labelHaloSizeSmall=_labelHaloSizeSmall;
@property(nonatomic) float labelHeightLargeCurveLimit; // @synthesize labelHeightLargeCurveLimit=_labelHeightLargeCurveLimit;
@property(nonatomic) int labelHeightLargeCurve; // @synthesize labelHeightLargeCurve=_labelHeightLargeCurve;
@property(nonatomic) float labelHeightLarge; // @synthesize labelHeightLarge=_labelHeightLarge;
@property(nonatomic) float labelHeightMediumCurveLimit; // @synthesize labelHeightMediumCurveLimit=_labelHeightMediumCurveLimit;
@property(nonatomic) int labelHeightMediumCurve; // @synthesize labelHeightMediumCurve=_labelHeightMediumCurve;
@property(nonatomic) float labelHeightMedium; // @synthesize labelHeightMedium=_labelHeightMedium;
@property(nonatomic) float labelHeightSmallCurveLimit; // @synthesize labelHeightSmallCurveLimit=_labelHeightSmallCurveLimit;
@property(nonatomic) int labelHeightSmallCurve; // @synthesize labelHeightSmallCurve=_labelHeightSmallCurve;
@property(nonatomic) float labelHeightSmall; // @synthesize labelHeightSmall=_labelHeightSmall;
@property(nonatomic) BOOL showShieldTextAsLabel; // @synthesize showShieldTextAsLabel=_showShieldTextAsLabel;
@property(nonatomic) float genericShieldDropShadowSize; // @synthesize genericShieldDropShadowSize=_genericShieldDropShadowSize;
@property(nonatomic) unsigned int genericShieldHaloColor; // @synthesize genericShieldHaloColor=_genericShieldHaloColor;
@property(nonatomic) float genericShieldHaloSize; // @synthesize genericShieldHaloSize=_genericShieldHaloSize;
@property(nonatomic) float layerShadowsTaper; // @synthesize layerShadowsTaper=_layerShadowsTaper;
@property(nonatomic) float layerShadowsRamp; // @synthesize layerShadowsRamp=_layerShadowsRamp;
@property(nonatomic) float layerShadowsWidth; // @synthesize layerShadowsWidth=_layerShadowsWidth;
@property(nonatomic) float fancyCasingsStrokeWidth; // @synthesize fancyCasingsStrokeWidth=_fancyCasingsStrokeWidth;
@property(nonatomic) float fancyCasingsWidth; // @synthesize fancyCasingsWidth=_fancyCasingsWidth;
@property(nonatomic) float casingsShadowWidth; // @synthesize casingsShadowWidth=_casingsShadowWidth;
@property(nonatomic) float casingsShadowRamp; // @synthesize casingsShadowRamp=_casingsShadowRamp;
@property(nonatomic) float casingsStrokeWidth; // @synthesize casingsStrokeWidth=_casingsStrokeWidth;
@property(nonatomic) float casingsStrokeColor; // @synthesize casingsStrokeColor=_casingsStrokeColor;
@property(nonatomic) float casingsHeight; // @synthesize casingsHeight=_casingsHeight;
@property(nonatomic) float casingsWidth; // @synthesize casingsWidth=_casingsWidth;
@property(nonatomic) int thirdFillTextureBlendMode; // @synthesize thirdFillTextureBlendMode=_thirdFillTextureBlendMode;
@property(nonatomic) float thirdFillTextureOpacity; // @synthesize thirdFillTextureOpacity=_thirdFillTextureOpacity;
@property(retain, nonatomic) NSString *thirdFillTexture; // @synthesize thirdFillTexture=_thirdFillTexture;
@property(nonatomic) int secondFillTextureBlendMode; // @synthesize secondFillTextureBlendMode=_secondFillTextureBlendMode;
@property(nonatomic) float secondFillTextureOpacity; // @synthesize secondFillTextureOpacity=_secondFillTextureOpacity;
@property(retain, nonatomic) NSString *secondFillTexture; // @synthesize secondFillTexture=_secondFillTexture;
@property(nonatomic) int fillTextureBlendMode; // @synthesize fillTextureBlendMode=_fillTextureBlendMode;
@property(nonatomic) float fillTextureOpacity; // @synthesize fillTextureOpacity=_fillTextureOpacity;
@property(nonatomic) float outerStrokeWidth; // @synthesize outerStrokeWidth=_outerStrokeWidth;
@property(nonatomic) unsigned int outerStrokeColor; // @synthesize outerStrokeColor=_outerStrokeColor;
@property(nonatomic) unsigned int labelIconHaloColor; // @synthesize labelIconHaloColor=_labelIconHaloColor;
@property(retain, nonatomic) VKPTrafficStyle *trafficFast; // @synthesize trafficFast=_trafficFast;
@property(retain, nonatomic) VKPTrafficStyle *trafficMedium; // @synthesize trafficMedium=_trafficMedium;
@property(retain, nonatomic) VKPTrafficStyle *trafficSlow; // @synthesize trafficSlow=_trafficSlow;
@property(retain, nonatomic) VKPTrafficStyle *trafficClosed; // @synthesize trafficClosed=_trafficClosed;
@property(nonatomic) float insetShadowAngle; // @synthesize insetShadowAngle=_insetShadowAngle;
@property(nonatomic) float insetShadowHeight; // @synthesize insetShadowHeight=_insetShadowHeight;
@property(nonatomic) int polygonType; // @synthesize polygonType=_polygonType;
@property(retain, nonatomic) NSString *fillTexture; // @synthesize fillTexture=_fillTexture;
@property(nonatomic) BOOL arrowVisible; // @synthesize arrowVisible=_arrowVisible;
@property(nonatomic) float shieldTiltLimit; // @synthesize shieldTiltLimit=_shieldTiltLimit;
@property(nonatomic) BOOL shieldVisible; // @synthesize shieldVisible=_shieldVisible;
@property(nonatomic) float labelShieldRank; // @synthesize labelShieldRank=_labelShieldRank;
@property(nonatomic) float labelRoadRank; // @synthesize labelRoadRank=_labelRoadRank;
@property(nonatomic) float labelFontExpansion; // @synthesize labelFontExpansion=_labelFontExpansion;
@property(nonatomic) float labelTiltLimit; // @synthesize labelTiltLimit=_labelTiltLimit;
@property(nonatomic) BOOL labelSmallCaps; // @synthesize labelSmallCaps=_labelSmallCaps;
@property(retain, nonatomic) NSString *labelShield; // @synthesize labelShield=_labelShield;
@property(retain, nonatomic) NSString *labelFontFamily; // @synthesize labelFontFamily=_labelFontFamily;
@property(retain, nonatomic) NSString *labelIcon; // @synthesize labelIcon=_labelIcon;
@property(nonatomic) float labelHaloSize; // @synthesize labelHaloSize=_labelHaloSize;
@property(nonatomic) unsigned int fillZIndex; // @synthesize fillZIndex=_fillZIndex;
@property(nonatomic) unsigned int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) float widthDropoff; // @synthesize widthDropoff=_widthDropoff;
@property(nonatomic) float labelHeightCurveLimit; // @synthesize labelHeightCurveLimit=_labelHeightCurveLimit;
@property(nonatomic) int labelHeightCurve; // @synthesize labelHeightCurve=_labelHeightCurve;
@property(nonatomic) float labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) float strokeWidthCurveLimit; // @synthesize strokeWidthCurveLimit=_strokeWidthCurveLimit;
@property(nonatomic) int strokeWidthCurve; // @synthesize strokeWidthCurve=_strokeWidthCurve;
@property(nonatomic) float strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) float widthCurveLimit; // @synthesize widthCurveLimit=_widthCurveLimit;
@property(nonatomic) int widthCurve; // @synthesize widthCurve=_widthCurve;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasArrowHeightLarge;
@property(nonatomic) BOOL hasArrowHeightMedium;
@property(nonatomic) BOOL hasArrowHeightSmall;
@property(nonatomic) BOOL hasLabelSpacingLarge;
@property(nonatomic) BOOL hasLabelSpacingMedium;
@property(nonatomic) BOOL hasLabelSpacingSmall;
@property(nonatomic) BOOL hasLabelFontExpansionLarge;
@property(nonatomic) BOOL hasLabelFontExpansionMedium;
@property(nonatomic) BOOL hasLabelFontExpansionSmall;
@property(nonatomic) BOOL hasLabelHaloSizeLarge;
@property(nonatomic) BOOL hasLabelHaloSizeMedium;
@property(nonatomic) BOOL hasLabelHaloSizeSmall;
@property(nonatomic) BOOL hasLabelHeightLargeCurveLimit;
@property(nonatomic) BOOL hasLabelHeightLargeCurve;
@property(nonatomic) BOOL hasLabelHeightLarge;
@property(nonatomic) BOOL hasLabelHeightMediumCurveLimit;
@property(nonatomic) BOOL hasLabelHeightMediumCurve;
@property(nonatomic) BOOL hasLabelHeightMedium;
@property(nonatomic) BOOL hasLabelHeightSmallCurveLimit;
@property(nonatomic) BOOL hasLabelHeightSmallCurve;
@property(nonatomic) BOOL hasLabelHeightSmall;
@property(nonatomic) BOOL hasShowShieldTextAsLabel;
@property(nonatomic) BOOL hasGenericShieldDropShadowColor;
@property(nonatomic) unsigned int genericShieldDropShadowColor; // @synthesize genericShieldDropShadowColor=_genericShieldDropShadowColor;
@property(nonatomic) BOOL hasGenericShieldDropShadowSize;
- (void)setGenericShieldDropShadowOffsets:(float *)arg1 count:(unsigned int)arg2;
- (float)genericShieldDropShadowOffsetAtIndex:(unsigned int)arg1;
- (void)addGenericShieldDropShadowOffset:(float)arg1;
- (void)clearGenericShieldDropShadowOffsets;
@property(readonly, nonatomic) float *genericShieldDropShadowOffsets;
@property(readonly, nonatomic) unsigned int genericShieldDropShadowOffsetsCount;
@property(nonatomic) BOOL hasGenericShieldHaloColor;
@property(nonatomic) BOOL hasGenericShieldHaloSize;
@property(nonatomic) BOOL hasGenericShieldTextColor;
@property(nonatomic) unsigned int genericShieldTextColor; // @synthesize genericShieldTextColor=_genericShieldTextColor;
@property(nonatomic) BOOL hasGenericShieldBorderColor;
@property(nonatomic) unsigned int genericShieldBorderColor; // @synthesize genericShieldBorderColor=_genericShieldBorderColor;
@property(nonatomic) BOOL hasGenericShieldBackgroundColor;
@property(nonatomic) unsigned int genericShieldBackgroundColor; // @synthesize genericShieldBackgroundColor=_genericShieldBackgroundColor;
@property(nonatomic) BOOL hasGenericShieldStyle;
@property(nonatomic) int genericShieldStyle; // @synthesize genericShieldStyle=_genericShieldStyle;
@property(nonatomic) BOOL hasLayerShadowsTaper;
@property(nonatomic) BOOL hasLayerShadowsRamp;
@property(nonatomic) BOOL hasLayerShadowsWidth;
@property(nonatomic) BOOL hasLayerShadowsVisible;
@property(nonatomic) BOOL layerShadowsVisible; // @synthesize layerShadowsVisible=_layerShadowsVisible;
@property(nonatomic) BOOL hasFancyCasingsStrokeWidth;
@property(nonatomic) BOOL hasFancyCasingsStrokeColor;
@property(nonatomic) unsigned int fancyCasingsStrokeColor; // @synthesize fancyCasingsStrokeColor=_fancyCasingsStrokeColor;
@property(nonatomic) BOOL hasFancyCasingsWidth;
@property(nonatomic) BOOL hasFancyCasingsColor;
@property(nonatomic) unsigned int fancyCasingsColor; // @synthesize fancyCasingsColor=_fancyCasingsColor;
@property(nonatomic) BOOL hasFancyCasingsVisible;
@property(nonatomic) BOOL fancyCasingsVisible; // @synthesize fancyCasingsVisible=_fancyCasingsVisible;
@property(nonatomic) BOOL hasCasingsShadowWidth;
@property(nonatomic) BOOL hasCasingsShadowRamp;
@property(nonatomic) BOOL hasCasingsStrokeWidth;
@property(nonatomic) BOOL hasCasingsStrokeColor;
@property(nonatomic) BOOL hasCasingsHeight;
@property(nonatomic) BOOL hasCasingsWidth;
@property(nonatomic) BOOL hasCasingsColor;
@property(nonatomic) unsigned int casingsColor; // @synthesize casingsColor=_casingsColor;
@property(nonatomic) BOOL hasCasingsVisible;
@property(nonatomic) BOOL casingsVisible; // @synthesize casingsVisible=_casingsVisible;
@property(nonatomic) BOOL hasThirdFillTextureBlendMode;
@property(nonatomic) BOOL hasThirdFillTextureOpacity;
@property(readonly, nonatomic) BOOL hasThirdFillTexture;
@property(nonatomic) BOOL hasSecondFillTextureBlendMode;
@property(nonatomic) BOOL hasSecondFillTextureOpacity;
@property(readonly, nonatomic) BOOL hasSecondFillTexture;
@property(nonatomic) BOOL hasFillTextureBlendMode;
@property(nonatomic) BOOL hasFillTextureOpacity;
@property(nonatomic) BOOL hasOuterStrokeWidth;
@property(nonatomic) BOOL hasOuterStrokeColor;
@property(nonatomic) BOOL hasLabelIconHaloColor;
@property(nonatomic) BOOL hasLabelIconGlyphColor;
@property(nonatomic) unsigned int labelIconGlyphColor; // @synthesize labelIconGlyphColor=_labelIconGlyphColor;
- (void)setLabelIconGradients:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)labelIconGradientAtIndex:(unsigned int)arg1;
- (void)addLabelIconGradient:(unsigned int)arg1;
- (void)clearLabelIconGradients;
@property(readonly, nonatomic) unsigned int *labelIconGradients;
@property(readonly, nonatomic) unsigned int labelIconGradientsCount;
@property(nonatomic) BOOL hasLabelIconBadgeColor;
@property(nonatomic) unsigned int labelIconBadgeColor; // @synthesize labelIconBadgeColor=_labelIconBadgeColor;
@property(nonatomic) BOOL hasLabelIconStyle;
@property(nonatomic) int labelIconStyle; // @synthesize labelIconStyle=_labelIconStyle;
@property(nonatomic) BOOL hasLineDrawStyle;
@property(nonatomic) int lineDrawStyle; // @synthesize lineDrawStyle=_lineDrawStyle;
@property(readonly, nonatomic) BOOL hasTrafficFast;
@property(readonly, nonatomic) BOOL hasTrafficMedium;
@property(readonly, nonatomic) BOOL hasTrafficSlow;
@property(readonly, nonatomic) BOOL hasTrafficClosed;
@property(nonatomic) BOOL hasTrafficVisible;
@property(nonatomic) BOOL trafficVisible; // @synthesize trafficVisible=_trafficVisible;
@property(nonatomic) BOOL hasBuildingFlatColor;
@property(nonatomic) unsigned int buildingFlatColor; // @synthesize buildingFlatColor=_buildingFlatColor;
@property(nonatomic) BOOL hasBuildingLandmarkColor;
@property(nonatomic) unsigned int buildingLandmarkColor; // @synthesize buildingLandmarkColor=_buildingLandmarkColor;
@property(nonatomic) BOOL hasBuildingRoofStyle;
@property(nonatomic) int buildingRoofStyle; // @synthesize buildingRoofStyle=_buildingRoofStyle;
@property(nonatomic) BOOL hasBuildingOutlineVisible;
@property(nonatomic) BOOL buildingOutlineVisible; // @synthesize buildingOutlineVisible=_buildingOutlineVisible;
@property(nonatomic) BOOL hasBuildingOutlineColor;
@property(nonatomic) unsigned int buildingOutlineColor; // @synthesize buildingOutlineColor=_buildingOutlineColor;
@property(nonatomic) BOOL hasBuildingFacadeColor;
@property(nonatomic) unsigned int buildingFacadeColor; // @synthesize buildingFacadeColor=_buildingFacadeColor;
@property(nonatomic) BOOL hasBuildingTopColor;
@property(nonatomic) unsigned int buildingTopColor; // @synthesize buildingTopColor=_buildingTopColor;
- (void)setStrokeDashPatterns:(float *)arg1 count:(unsigned int)arg2;
- (float)strokeDashPatternAtIndex:(unsigned int)arg1;
- (void)addStrokeDashPattern:(float)arg1;
- (void)clearStrokeDashPatterns;
@property(readonly, nonatomic) float *strokeDashPatterns;
@property(readonly, nonatomic) unsigned int strokeDashPatternsCount;
- (void)setFillDashPatterns:(float *)arg1 count:(unsigned int)arg2;
- (float)fillDashPatternAtIndex:(unsigned int)arg1;
- (void)addFillDashPattern:(float)arg1;
- (void)clearFillDashPatterns;
@property(readonly, nonatomic) float *fillDashPatterns;
@property(readonly, nonatomic) unsigned int fillDashPatternsCount;
@property(nonatomic) BOOL hasDropShadowColor;
@property(nonatomic) unsigned int dropShadowColor; // @synthesize dropShadowColor=_dropShadowColor;
- (void)setDropShadowOffsets:(float *)arg1 count:(unsigned int)arg2;
- (float)dropShadowOffsetAtIndex:(unsigned int)arg1;
- (void)addDropShadowOffset:(float)arg1;
- (void)clearDropShadowOffsets;
@property(readonly, nonatomic) float *dropShadowOffsets;
@property(readonly, nonatomic) unsigned int dropShadowOffsetsCount;
@property(nonatomic) BOOL hasInsetShadowColor;
@property(nonatomic) unsigned int insetShadowColor; // @synthesize insetShadowColor=_insetShadowColor;
@property(nonatomic) BOOL hasInsetShadowAngle;
@property(nonatomic) BOOL hasInsetShadowHeight;
@property(nonatomic) BOOL hasPolygonType;
@property(readonly, nonatomic) BOOL hasFillTexture;
@property(nonatomic) BOOL hasArrowSpacing;
@property(nonatomic) float arrowSpacing; // @synthesize arrowSpacing=_arrowSpacing;
@property(nonatomic) BOOL hasArrowHeight;
@property(nonatomic) float arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) BOOL hasArrowVisible;
@property(nonatomic) BOOL hasShieldTiltLimit;
@property(nonatomic) BOOL hasShieldVisible;
@property(nonatomic) BOOL hasYieldsToOnscreenLabels;
@property(nonatomic) BOOL yieldsToOnscreenLabels; // @synthesize yieldsToOnscreenLabels=_yieldsToOnscreenLabels;
@property(nonatomic) BOOL hasLabelDedupeRank;
@property(nonatomic) unsigned int labelDedupeRank; // @synthesize labelDedupeRank=_labelDedupeRank;
@property(nonatomic) BOOL hasOnlyShowIfTappable;
@property(nonatomic) BOOL onlyShowIfTappable; // @synthesize onlyShowIfTappable=_onlyShowIfTappable;
@property(nonatomic) BOOL hasLabelTextVisibility;
@property(nonatomic) int labelTextVisibility; // @synthesize labelTextVisibility=_labelTextVisibility;
@property(nonatomic) BOOL hasLabelSpacing;
@property(nonatomic) float labelSpacing; // @synthesize labelSpacing=_labelSpacing;
@property(nonatomic) BOOL hasLabelShieldRank;
@property(nonatomic) BOOL hasLabelRoadRank;
@property(nonatomic) BOOL hasLabelFontExpansion;
@property(nonatomic) BOOL hasLabelTiltLimit;
@property(nonatomic) BOOL hasLabelSmallCaps;
@property(readonly, nonatomic) BOOL hasLabelShield;
@property(nonatomic) BOOL hasLabelHaloColor;
@property(nonatomic) unsigned int labelHaloColor; // @synthesize labelHaloColor=_labelHaloColor;
@property(nonatomic) BOOL hasLabelColor;
@property(nonatomic) unsigned int labelColor; // @synthesize labelColor=_labelColor;
@property(readonly, nonatomic) BOOL hasLabelFontFamily;
@property(readonly, nonatomic) BOOL hasLabelIcon;
@property(nonatomic) BOOL hasLabelLineWrap;
@property(nonatomic) unsigned int labelLineWrap; // @synthesize labelLineWrap=_labelLineWrap;
@property(nonatomic) BOOL hasLabelUpcase;
@property(nonatomic) BOOL labelUpcase; // @synthesize labelUpcase=_labelUpcase;
@property(nonatomic) BOOL hasLabelRaisedInitial;
@property(nonatomic) BOOL labelRaisedInitial; // @synthesize labelRaisedInitial=_labelRaisedInitial;
@property(nonatomic) BOOL hasLabelHaloSize;
@property(nonatomic) BOOL hasFillColorInterpolate;
@property(nonatomic) BOOL fillColorInterpolate; // @synthesize fillColorInterpolate=_fillColorInterpolate;
@property(nonatomic) BOOL hasStrokeColorInterpolate;
@property(nonatomic) BOOL strokeColorInterpolate; // @synthesize strokeColorInterpolate=_strokeColorInterpolate;
@property(nonatomic) BOOL hasFillZIndex;
@property(nonatomic) BOOL hasSimpleLine;
@property(nonatomic) BOOL simpleLine; // @synthesize simpleLine=_simpleLine;
@property(nonatomic) BOOL hasZIndex;
@property(nonatomic) BOOL hasWidthDropoff;
@property(nonatomic) BOOL hasLabelHeightCurveLimit;
@property(nonatomic) BOOL hasLabelHeightCurve;
@property(nonatomic) BOOL hasLabelHeight;
@property(nonatomic) BOOL hasStrokeWidthCurveLimit;
@property(nonatomic) BOOL hasStrokeWidthCurve;
@property(nonatomic) BOOL hasStrokeWidth;
@property(nonatomic) BOOL hasWidthCurveLimit;
@property(nonatomic) BOOL hasWidthCurve;
@property(nonatomic) BOOL hasWidth;
@property(nonatomic) BOOL hasStrokeColor;
@property(nonatomic) unsigned int strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) BOOL hasFillColor;
@property(nonatomic) unsigned int fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) BOOL hasVisible;
- (void)dealloc;

@end

