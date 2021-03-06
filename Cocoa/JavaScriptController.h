#import <JavaScriptCore/JavaScriptCore.h>

static JSContext *context;

@protocol JavaScriptControllerExports <JSExport>
+ (JSValue *) require: (NSString *) file;
+ (void) log: (NSString *) message;
+ (void) postMessage: (JSValue *) message;
+ (instancetype) instantiate;
@end

@class JavaScriptController;
@interface JavaScriptController: NSObject<JavaScriptControllerExports>
@end
