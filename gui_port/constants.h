/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QColor>
#include <QString>
#include <QEasingCurve>
#include <QApplication>
#include "remoteassistance.h"

namespace DRA
{

static const uint SideBarWidth = 48;

static const QColor BgLightColor = "#252627";
static const QColor BgDarkColor = "#1A1B1B";

static const QColor TextNormalColor = "#b4b4b4";
static const QColor TextHoverColor = "#ffffff";

static const uint FrameShadowWidth = 16;
static const uint RemoteAssistanceWidth = 360;
static const uint RemoteAssistanceHeight = 320;
static const uint ModuleContentWidth = 320;
static const uint HomeScreen_TopWidgetHeight = 150;
static const uint HomeScreen_BottomWidgetHeight = 84;

static const uint FrameAnimationDuration = 300;
static const QEasingCurve FrameShowCurve = QEasingCurve::Linear;
static const QEasingCurve FrameHideCurve = QEasingCurve::Linear;

static const uint TipsMoveAnimationDuration = 201;
static const QEasingCurve TipsMoveCurve = QEasingCurve::OutCubic;

static const QString IconPath = ":/resources/images/";
static QApplication * globalApp;
static RemoteAssistance * globalRa;
}

#endif // CONSTANTS_H
