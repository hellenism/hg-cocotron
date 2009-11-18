#import <Foundation/NSObject.h>
#import "O2Geometry.h"
#import "O2AffineTransform.h"

@class O2Path,O2Image;

typedef enum {
 O2ClipPhaseNonZeroPath,
 O2ClipPhaseEOPath,
 O2ClipPhaseMask,
} O2ClipPhaseType;

@interface O2ClipPhase : NSObject {
   O2ClipPhaseType _type;
   id     _object;
   O2Rect _rect;
   O2AffineTransform _transform;
}

-initWithNonZeroPath:(O2Path *)path;
-initWithEOPath:(O2Path *)path;
-initWithMask:(O2Image *)mask rect:(O2Rect)rect transform:(O2AffineTransform)transform;

-(O2ClipPhaseType)phaseType;
-object;

@end