//
//  AKAutoWahAudioUnit.h
//  AudioKit
//
//  Created by Aurelius Prochazka, revision history on Github.
//  Copyright © 2017 Aurelius Prochazka. All rights reserved.
//

#pragma once
#import "AKAudioUnit.h"

@interface AKAutoWahAudioUnit : AKAudioUnit
@property (nonatomic) float wah;
@property (nonatomic) float mix;
@property (nonatomic) float amplitude;
@end


