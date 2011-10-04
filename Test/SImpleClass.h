//
//  SImpleClass.h
//  Test
//
//  Created by Lars Meyer on 02.10.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SImpleClass : NSObject {

@private
    
    IBOutlet NSTextField *fieldOne;
    IBOutlet NSButton *button;

}

- [IBAction]TestProc:[id]sender;
@end

