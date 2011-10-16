
#import <Foundation/Foundation.h>

@protocol MyClassDelegate
- (void)someAction;
@end

@interface MyClass {
	NSMutableArray *_delegates;
}
- (void)addDelegate:(id <MyClassDelegate>)delegate;
- (void)removeDelegate:(id <MyClassDelegate>)delegate;
@end
