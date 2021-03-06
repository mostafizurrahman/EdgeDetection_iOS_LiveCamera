//
//  BlurShaderProgram.h
//  EdgeDetection_Live
//
//  Created by Paradox Lab on 12/27/17.
//  Copyright © 2017 Paradox Lab. All rights reserved.
//

#import "GLShaderProgram.h"

@interface BlurShaderProgram : GLShaderProgram

@property (readwrite) GLuint u_TexelWidthOffset;
@property (readwrite) GLuint u_texelHeightOffset;
@end
