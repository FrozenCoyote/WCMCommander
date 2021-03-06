/*
 * Part of WCM Commander
 * https://github.com/corporateshark/WCMCommander
 * wcm@linderdaum.com
 */

#pragma once

#include "ncdialogs.h"

clPtr<cfont> SelectX11Font( NCDialogParent* parent, bool fixed );
clPtr<cfont> SelectFTFont( NCDialogParent* parent, bool fixed, const char* currentUri );
