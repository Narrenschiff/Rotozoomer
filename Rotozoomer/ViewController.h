//
//  ViewController.h
//  Rotozoomer
//
//  Created by Richard Smith on 16/05/2013.
//  Copyright (c) 2013 Richard Smith. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface ViewController : GLKViewController

{
    UILabel *FPSreadout;
}

- (IBAction) textureA: (id)sender;
- (IBAction) textureB: (id)sender;

@property (strong, nonatomic) IBOutlet UILabel *FPSreadout;


@end
