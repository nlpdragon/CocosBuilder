//
//  InspectorTexture.h
//  CocosBuilder
//
//  Created by Viktor Lidholt on 2/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "InspectorValue.h"

@interface InspectorTexture : InspectorValue
{
    IBOutlet NSPopUpButton* popup;
    IBOutlet NSMenu* menu;
}

@end