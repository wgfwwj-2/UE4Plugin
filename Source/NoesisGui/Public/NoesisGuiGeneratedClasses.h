////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisGuiBaseComponent.h"

#include "GeneratedClasses/NoesisGuiBaseBinding.h"
#include "GeneratedClasses/NoesisGuiBinding.h"
#include "GeneratedClasses/NoesisGuiBaseCommand.h"
#include "GeneratedClasses/NoesisGuiBaseDictionary.h"
#include "GeneratedClasses/NoesisGuiResourceDictionary.h"
#include "GeneratedClasses/NoesisGuiBaseExpression.h"
#include "GeneratedClasses/NoesisGuiBaseBindingExpression.h"
#include "GeneratedClasses/NoesisGuiBaseSetter.h"
#include "GeneratedClasses/NoesisGuiSetter.h"
#include "GeneratedClasses/NoesisGuiBaseValueConverter.h"
#include "GeneratedClasses/NoesisGuiClock.h"
#include "GeneratedClasses/NoesisGuiAnimationClock.h"
#include "GeneratedClasses/NoesisGuiClockGroup.h"
#include "GeneratedClasses/NoesisGuiCollection.h"
#include "GeneratedClasses/NoesisGuiTriggerCollection.h"
#include "GeneratedClasses/NoesisGuiInputBindingCollection.h"
#include "GeneratedClasses/NoesisGuiBaseSetterCollection.h"
#include "GeneratedClasses/NoesisGuiVisualStateCollection.h"
#include "GeneratedClasses/NoesisGuiCommandBindingCollection.h"
#include "GeneratedClasses/NoesisGuiInlineCollection.h"
#include "GeneratedClasses/NoesisGuiColumnDefinitionCollection.h"
#include "GeneratedClasses/NoesisGuiRowDefinitionCollection.h"
#include "GeneratedClasses/NoesisGuiGridViewColumnCollection.h"
#include "GeneratedClasses/NoesisGuiTriggerActionCollection.h"
#include "GeneratedClasses/NoesisGuiConditionCollection.h"
#include "GeneratedClasses/NoesisGuiVisualTransitionCollection.h"
#include "GeneratedClasses/NoesisGuiInputGestureCollection.h"
#include "GeneratedClasses/NoesisGuiVisualCollection.h"
#include "GeneratedClasses/NoesisGuiUIElementCollection.h"
#include "GeneratedClasses/NoesisGuiCommandBinding.h"
#include "GeneratedClasses/NoesisGuiCondition.h"
#include "GeneratedClasses/NoesisGuiDataTemplateSelector.h"
#include "GeneratedClasses/NoesisGuiDependencyObject.h"
#include "GeneratedClasses/NoesisGuiBaseTrigger.h"
#include "GeneratedClasses/NoesisGuiDataTrigger.h"
#include "GeneratedClasses/NoesisGuiEventTrigger.h"
#include "GeneratedClasses/NoesisGuiMultiDataTrigger.h"
#include "GeneratedClasses/NoesisGuiMultiTrigger.h"
#include "GeneratedClasses/NoesisGuiTrigger.h"
#include "GeneratedClasses/NoesisGuiBaseView.h"
#include "GeneratedClasses/NoesisGuiGridView.h"
#include "GeneratedClasses/NoesisGuiCollectionViewSource.h"
#include "GeneratedClasses/NoesisGuiFreezable.h"
#include "GeneratedClasses/NoesisGuiAnimatable.h"
#include "GeneratedClasses/NoesisGuiBrush.h"
#include "GeneratedClasses/NoesisGuiGradientBrush.h"
#include "GeneratedClasses/NoesisGuiLinearGradientBrush.h"
#include "GeneratedClasses/NoesisGuiRadialGradientBrush.h"
#include "GeneratedClasses/NoesisGuiSolidColorBrush.h"
#include "GeneratedClasses/NoesisGuiTileBrush.h"
#include "GeneratedClasses/NoesisGuiImageBrush.h"
#include "GeneratedClasses/NoesisGuiVisualBrush.h"
#include "GeneratedClasses/NoesisGuiDashStyle.h"
#include "GeneratedClasses/NoesisGuiGeometry.h"
#include "GeneratedClasses/NoesisGuiCombinedGeometry.h"
#include "GeneratedClasses/NoesisGuiEllipseGeometry.h"
#include "GeneratedClasses/NoesisGuiGeometryGroup.h"
#include "GeneratedClasses/NoesisGuiLineGeometry.h"
#include "GeneratedClasses/NoesisGuiRectangleGeometry.h"
#include "GeneratedClasses/NoesisGuiStreamGeometry.h"
#include "GeneratedClasses/NoesisGuiGradientStop.h"
#include "GeneratedClasses/NoesisGuiImageSource.h"
#include "GeneratedClasses/NoesisGuiTextureSource.h"
#include "GeneratedClasses/NoesisGuiPen.h"
#include "GeneratedClasses/NoesisGuiProjection.h"
#include "GeneratedClasses/NoesisGuiMatrix3DProjection.h"
#include "GeneratedClasses/NoesisGuiPlaneProjection.h"
#include "GeneratedClasses/NoesisGuiTimeline.h"
#include "GeneratedClasses/NoesisGuiAnimationTimeline.h"
#include "GeneratedClasses/NoesisGuiInt16AnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiSizeAnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiPointAnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiColorAnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiThicknessAnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiObjectAnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiInt32AnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiStringAnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiBooleanAnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiRectAnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiDoubleAnimationUsingKeyFrames.h"
#include "GeneratedClasses/NoesisGuiBaseAnimation.h"
#include "GeneratedClasses/NoesisGuiInt32Animation.h"
#include "GeneratedClasses/NoesisGuiPointAnimation.h"
#include "GeneratedClasses/NoesisGuiColorAnimation.h"
#include "GeneratedClasses/NoesisGuiRectAnimation.h"
#include "GeneratedClasses/NoesisGuiThicknessAnimation.h"
#include "GeneratedClasses/NoesisGuiSizeAnimation.h"
#include "GeneratedClasses/NoesisGuiInt16Animation.h"
#include "GeneratedClasses/NoesisGuiDoubleAnimation.h"
#include "GeneratedClasses/NoesisGuiTimelineGroup.h"
#include "GeneratedClasses/NoesisGuiParallelTimeline.h"
#include "GeneratedClasses/NoesisGuiStoryboard.h"
#include "GeneratedClasses/NoesisGuiTransform.h"
#include "GeneratedClasses/NoesisGuiCompositeTransform.h"
#include "GeneratedClasses/NoesisGuiMatrixTransform.h"
#include "GeneratedClasses/NoesisGuiRotateTransform.h"
#include "GeneratedClasses/NoesisGuiScaleTransform.h"
#include "GeneratedClasses/NoesisGuiSkewTransform.h"
#include "GeneratedClasses/NoesisGuiTransformGroup.h"
#include "GeneratedClasses/NoesisGuiTranslateTransform.h"
#include "GeneratedClasses/NoesisGuiEasingFunctionBase.h"
#include "GeneratedClasses/NoesisGuiBackEase.h"
#include "GeneratedClasses/NoesisGuiBounceEase.h"
#include "GeneratedClasses/NoesisGuiCircleEase.h"
#include "GeneratedClasses/NoesisGuiCubicEase.h"
#include "GeneratedClasses/NoesisGuiElasticEase.h"
#include "GeneratedClasses/NoesisGuiExponentialEase.h"
#include "GeneratedClasses/NoesisGuiPowerEase.h"
#include "GeneratedClasses/NoesisGuiQuadraticEase.h"
#include "GeneratedClasses/NoesisGuiQuarticEase.h"
#include "GeneratedClasses/NoesisGuiQuinticEase.h"
#include "GeneratedClasses/NoesisGuiSineEase.h"
#include "GeneratedClasses/NoesisGuiInputBinding.h"
#include "GeneratedClasses/NoesisGuiKeyBinding.h"
#include "GeneratedClasses/NoesisGuiInt16KeyFrame.h"
#include "GeneratedClasses/NoesisGuiSizeKeyFrame.h"
#include "GeneratedClasses/NoesisGuiPointKeyFrame.h"
#include "GeneratedClasses/NoesisGuiColorKeyFrame.h"
#include "GeneratedClasses/NoesisGuiThicknessKeyFrame.h"
#include "GeneratedClasses/NoesisGuiObjectKeyFrame.h"
#include "GeneratedClasses/NoesisGuiInt32KeyFrame.h"
#include "GeneratedClasses/NoesisGuiStringKeyFrame.h"
#include "GeneratedClasses/NoesisGuiBooleanKeyFrame.h"
#include "GeneratedClasses/NoesisGuiRectKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDoubleKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteInt16KeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteSizeKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscretePointKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteColorKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteThicknessKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteObjectKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteInt32KeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteStringKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteBooleanKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteRectKeyFrame.h"
#include "GeneratedClasses/NoesisGuiDiscreteDoubleKeyFrame.h"
#include "GeneratedClasses/NoesisGuiEasingInt32KeyFrame.h"
#include "GeneratedClasses/NoesisGuiEasingPointKeyFrame.h"
#include "GeneratedClasses/NoesisGuiEasingColorKeyFrame.h"
#include "GeneratedClasses/NoesisGuiEasingRectKeyFrame.h"
#include "GeneratedClasses/NoesisGuiEasingThicknessKeyFrame.h"
#include "GeneratedClasses/NoesisGuiEasingSizeKeyFrame.h"
#include "GeneratedClasses/NoesisGuiEasingInt16KeyFrame.h"
#include "GeneratedClasses/NoesisGuiEasingDoubleKeyFrame.h"
#include "GeneratedClasses/NoesisGuiLinearInt32KeyFrame.h"
#include "GeneratedClasses/NoesisGuiLinearPointKeyFrame.h"
#include "GeneratedClasses/NoesisGuiLinearColorKeyFrame.h"
#include "GeneratedClasses/NoesisGuiLinearRectKeyFrame.h"
#include "GeneratedClasses/NoesisGuiLinearThicknessKeyFrame.h"
#include "GeneratedClasses/NoesisGuiLinearSizeKeyFrame.h"
#include "GeneratedClasses/NoesisGuiLinearInt16KeyFrame.h"
#include "GeneratedClasses/NoesisGuiLinearDoubleKeyFrame.h"
#include "GeneratedClasses/NoesisGuiSplineInt32KeyFrame.h"
#include "GeneratedClasses/NoesisGuiSplinePointKeyFrame.h"
#include "GeneratedClasses/NoesisGuiSplineColorKeyFrame.h"
#include "GeneratedClasses/NoesisGuiSplineRectKeyFrame.h"
#include "GeneratedClasses/NoesisGuiSplineThicknessKeyFrame.h"
#include "GeneratedClasses/NoesisGuiSplineSizeKeyFrame.h"
#include "GeneratedClasses/NoesisGuiSplineInt16KeyFrame.h"
#include "GeneratedClasses/NoesisGuiSplineDoubleKeyFrame.h"
#include "GeneratedClasses/NoesisGuiKeySpline.h"
#include "GeneratedClasses/NoesisGuiGridViewColumn.h"
#include "GeneratedClasses/NoesisGuiTextElement.h"
#include "GeneratedClasses/NoesisGuiInline.h"
#include "GeneratedClasses/NoesisGuiLineBreak.h"
#include "GeneratedClasses/NoesisGuiRun.h"
#include "GeneratedClasses/NoesisGuiTriggerAction.h"
#include "GeneratedClasses/NoesisGuiBeginStoryboard.h"
#include "GeneratedClasses/NoesisGuiControllableStoryboardAction.h"
#include "GeneratedClasses/NoesisGuiPauseStoryboard.h"
#include "GeneratedClasses/NoesisGuiResumeStoryboard.h"
#include "GeneratedClasses/NoesisGuiStopStoryboard.h"
#include "GeneratedClasses/NoesisGuiVisual.h"
#include "GeneratedClasses/NoesisGuiUIElement.h"
#include "GeneratedClasses/NoesisGuiFrameworkElement.h"
#include "GeneratedClasses/NoesisGuiBaseDefinition.h"
#include "GeneratedClasses/NoesisGuiColumnDefinition.h"
#include "GeneratedClasses/NoesisGuiRowDefinition.h"
#include "GeneratedClasses/NoesisGuiBaseGridViewRowPresenter.h"
#include "GeneratedClasses/NoesisGuiGridViewHeaderRowPresenter.h"
#include "GeneratedClasses/NoesisGuiGridViewRowPresenter.h"
#include "GeneratedClasses/NoesisGuiContentPresenter.h"
#include "GeneratedClasses/NoesisGuiScrollContentPresenter.h"
#include "GeneratedClasses/NoesisGuiControl.h"
#include "GeneratedClasses/NoesisGuiBaseTextBox.h"
#include "GeneratedClasses/NoesisGuiTextBox.h"
#include "GeneratedClasses/NoesisGuiContentControl.h"
#include "GeneratedClasses/NoesisGuiBaseButton.h"
#include "GeneratedClasses/NoesisGuiButton.h"
#include "GeneratedClasses/NoesisGuiGridViewColumnHeader.h"
#include "GeneratedClasses/NoesisGuiRepeatButton.h"
#include "GeneratedClasses/NoesisGuiToggleButton.h"
#include "GeneratedClasses/NoesisGuiCheckBox.h"
#include "GeneratedClasses/NoesisGuiRadioButton.h"
#include "GeneratedClasses/NoesisGuiHeaderedContentControl.h"
#include "GeneratedClasses/NoesisGuiExpander.h"
#include "GeneratedClasses/NoesisGuiGroupBox.h"
#include "GeneratedClasses/NoesisGuiTabItem.h"
#include "GeneratedClasses/NoesisGuiLabel.h"
#include "GeneratedClasses/NoesisGuiListBoxItem.h"
#include "GeneratedClasses/NoesisGuiComboBoxItem.h"
#include "GeneratedClasses/NoesisGuiListViewItem.h"
#include "GeneratedClasses/NoesisGuiScrollViewer.h"
#include "GeneratedClasses/NoesisGuiStatusBarItem.h"
#include "GeneratedClasses/NoesisGuiToolTip.h"
#include "GeneratedClasses/NoesisGuiUserControl.h"
#include "GeneratedClasses/NoesisGuiPage.h"
#include "GeneratedClasses/NoesisGuiItemsControl.h"
#include "GeneratedClasses/NoesisGuiBaseMenu.h"
#include "GeneratedClasses/NoesisGuiContextMenu.h"
#include "GeneratedClasses/NoesisGuiMenu.h"
#include "GeneratedClasses/NoesisGuiHeaderedItemsControl.h"
#include "GeneratedClasses/NoesisGuiMenuItem.h"
#include "GeneratedClasses/NoesisGuiToolBar.h"
#include "GeneratedClasses/NoesisGuiTreeViewItem.h"
#include "GeneratedClasses/NoesisGuiSelector.h"
#include "GeneratedClasses/NoesisGuiComboBox.h"
#include "GeneratedClasses/NoesisGuiListBox.h"
#include "GeneratedClasses/NoesisGuiListView.h"
#include "GeneratedClasses/NoesisGuiTabControl.h"
#include "GeneratedClasses/NoesisGuiStatusBar.h"
#include "GeneratedClasses/NoesisGuiTreeView.h"
#include "GeneratedClasses/NoesisGuiPasswordBox.h"
#include "GeneratedClasses/NoesisGuiRangeBase.h"
#include "GeneratedClasses/NoesisGuiProgressBar.h"
#include "GeneratedClasses/NoesisGuiScrollBar.h"
#include "GeneratedClasses/NoesisGuiSlider.h"
#include "GeneratedClasses/NoesisGuiSeparator.h"
#include "GeneratedClasses/NoesisGuiThumb.h"
#include "GeneratedClasses/NoesisGuiDecorator.h"
#include "GeneratedClasses/NoesisGuiAdornerDecorator.h"
#include "GeneratedClasses/NoesisGuiBorder.h"
#include "GeneratedClasses/NoesisGuiBulletDecorator.h"
#include "GeneratedClasses/NoesisGuiImage.h"
#include "GeneratedClasses/NoesisGuiItemsPresenter.h"
#include "GeneratedClasses/NoesisGuiPanel.h"
#include "GeneratedClasses/NoesisGuiCanvas.h"
#include "GeneratedClasses/NoesisGuiDockPanel.h"
#include "GeneratedClasses/NoesisGuiGrid.h"
#include "GeneratedClasses/NoesisGuiStackPanel.h"
#include "GeneratedClasses/NoesisGuiToolBarPanel.h"
#include "GeneratedClasses/NoesisGuiTabPanel.h"
#include "GeneratedClasses/NoesisGuiToolBarOverflowPanel.h"
#include "GeneratedClasses/NoesisGuiUniformGrid.h"
#include "GeneratedClasses/NoesisGuiVirtualizingPanel.h"
#include "GeneratedClasses/NoesisGuiVirtualizingStackPanel.h"
#include "GeneratedClasses/NoesisGuiWrapPanel.h"
#include "GeneratedClasses/NoesisGuiPopup.h"
#include "GeneratedClasses/NoesisGuiShape.h"
#include "GeneratedClasses/NoesisGuiEllipse.h"
#include "GeneratedClasses/NoesisGuiLine.h"
#include "GeneratedClasses/NoesisGuiPath.h"
#include "GeneratedClasses/NoesisGuiRectangle.h"
#include "GeneratedClasses/NoesisGuiTextBlock.h"
#include "GeneratedClasses/NoesisGuiTickBar.h"
#include "GeneratedClasses/NoesisGuiToolBarTray.h"
#include "GeneratedClasses/NoesisGuiTrack.h"
#include "GeneratedClasses/NoesisGuiViewbox.h"
#include "GeneratedClasses/NoesisGuiVisualState.h"
#include "GeneratedClasses/NoesisGuiVisualStateGroup.h"
#include "GeneratedClasses/NoesisGuiVisualTransition.h"
#include "GeneratedClasses/NoesisGuiDependencyProperty.h"
#include "GeneratedClasses/NoesisGuiFrameworkTemplate.h"
#include "GeneratedClasses/NoesisGuiControlTemplate.h"
#include "GeneratedClasses/NoesisGuiDataTemplate.h"
#include "GeneratedClasses/NoesisGuiHierarchicalDataTemplate.h"
#include "GeneratedClasses/NoesisGuiItemsPanelTemplate.h"
#include "GeneratedClasses/NoesisGuiInputGesture.h"
#include "GeneratedClasses/NoesisGuiKeyGesture.h"
#include "GeneratedClasses/NoesisGuiItemCollection.h"
#include "GeneratedClasses/NoesisGuiItemContainerGenerator.h"
#include "GeneratedClasses/NoesisGuiKeyboardNavigation.h"
#include "GeneratedClasses/NoesisGuiPropertyPath.h"
#include "GeneratedClasses/NoesisGuiRelativeSource.h"
#include "GeneratedClasses/NoesisGuiResourceKeyType.h"
#include "GeneratedClasses/NoesisGuiRoutedCommand.h"
#include "GeneratedClasses/NoesisGuiRoutedUICommand.h"
#include "GeneratedClasses/NoesisGuiRoutedEvent.h"
#include "GeneratedClasses/NoesisGuiStyle.h"
#include "GeneratedClasses/NoesisGuiTemplateBinding.h"
#include "GeneratedClasses/NoesisGuiToolTipService.h"
#include "GeneratedClasses/NoesisGuiThicknessKeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiColorKeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiSizeKeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiObjectKeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiBooleanKeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiInt32KeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiDoubleKeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiInt16KeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiStringKeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiPointKeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiRectKeyFrameCollection.h"
#include "GeneratedClasses/NoesisGuiVirtualizationCacheLength.h"
#include "GeneratedClasses/NoesisGuiVisualStateManager.h"

