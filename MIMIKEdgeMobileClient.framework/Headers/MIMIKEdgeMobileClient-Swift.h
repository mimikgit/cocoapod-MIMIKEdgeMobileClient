// Generated by Apple Swift version 5.4.2 (swiftlang-1205.0.28.2 clang-1205.0.19.57)
#ifndef MIMIKEDGEMOBILECLIENT_SWIFT_H
#define MIMIKEDGEMOBILECLIENT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MIMIKEdgeMobileClient",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSCoder;
@class NSString;
@class NSURL;

/// Application authorization request configuration object.
/// <ul>
///   <li>
///     clientId: Client application identifier. Generated for the developer at the developer portal during application registration.
///   </li>
///   <li>
///     redirectUrl: Client application redirect URL. Specified by the developer at the developer portal during application registration.
///   </li>
///   <li>
///     additionalScopes: Optional additional scopes for the authorization request. A default set is included automatically.
///   </li>
///   <li>
///     authorizationRootUrl: Application authorization server URL.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient18MIMIKAuthConfigApp")
@interface MIMIKAuthConfigApp : NSObject <NSCoding>
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId redirectUrl:(NSURL * _Nonnull)redirectUrl additionalScopes:(NSArray<NSString *> * _Nullable)additionalScopes authorizationRootUrl:(NSURL * _Nonnull)authorizationRootUrl OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nonnull clientId;
@property (nonatomic, copy) NSURL * _Nonnull redirectUrl;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable additionalScopes;
@property (nonatomic, copy) NSURL * _Nonnull authorizationRootUrl;
@property (nonatomic, readonly, copy) NSString * _Nonnull mimikDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MIMIKAuthTokens;

SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient20MIMIKAuthStateResult")
@interface MIMIKAuthStateResult : NSObject
@property (nonatomic, strong) MIMIKAuthTokens * _Nullable tokens;
@property (nonatomic) NSError * _Nullable error;
@property (nonatomic, readonly, copy) NSString * _Nonnull mimikDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSDate;

/// Authentication status object used for EdgeAppOpsProtocol delegate callbacks. Essentially it provides information about the current edgeSDK lifecycle state and the reason behind the lifecycle state change.
/// <ul>
///   <li>
///     accessToken: JWT edgeSDK authorization token which lets registered developer use local edgeSDK services. Used for mcm operations, micro services calls drive, esentially all direct to edgeSDK calls, account association. Used as a Bearer in the Authorization header.
///   </li>
///   <li>
///     idToken: JWT account identifying token used for getting more information about the authenticated account (such as sub - account id).
///   </li>
///   <li>
///     refreshToken: Currently not implemented.
///   </li>
///   <li>
///     accessTokenExpirationDate: Access token expiration date.
///   </li>
///   <li>
///     interactiveSessionTicket:.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient15MIMIKAuthTokens")
@interface MIMIKAuthTokens : NSObject <NSCoding>
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (nonnull instancetype)initWithAccessToken:(NSString * _Nullable)accessToken idToken:(NSString * _Nullable)idToken refreshToken:(NSString * _Nullable)refreshToken accessTokenExpirationDate:(NSDate * _Nullable)accessTokenExpirationDate interactiveSessionTicket:(NSString * _Nullable)interactiveSessionTicket phoneNumber:(NSString * _Nullable)phoneNumber mfaCode:(NSString * _Nullable)mfaCode oobCode:(NSString * _Nullable)oobCode OBJC_DESIGNATED_INITIALIZER;
/// <ul>
///   <li>
///     accessToken: The access token generated by the authorization server.
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nullable accessToken;
/// <ul>
///   <li>
///     idToken: ID Token value associated with the authenticated session. Always present for the authorization code grant exchange when OpenID Connect is used, optional for responses to access token refresh requests. Note that AppAuth does NOT verify the JWT signature. Users of AppAuth are encouraged to verifying the JWT signature using the validation library of their choosing.
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nullable idToken;
/// <ul>
///   <li>
///     refreshToken: The refresh token, which can be used to obtain new access tokens using the same authorization grant.
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nullable refreshToken;
/// <ul>
///   <li>
///     accessTokenExpirationDate: The approximate expiration date & time of the access token.
///   </li>
/// </ul>
@property (nonatomic, copy) NSDate * _Nullable accessTokenExpirationDate;
/// <ul>
///   <li>
///     interactiveSessionTicket:.
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nullable interactiveSessionTicket;
/// <ul>
///   <li>
///     phoneNumber:.
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
/// <ul>
///   <li>
///     mfaCode:.
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nullable mfaCode;
/// <ul>
///   <li>
///     oobCode:.
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nullable oobCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// MIMIK backend microservice configuration object.
/// <ul>
///   <li>
///     backendMicroserviceRootUrl: microservice URL.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient30MIMIKBackendMicroserviceConfig")
@interface MIMIKBackendMicroserviceConfig : NSObject <NSCoding>
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (nonnull instancetype)initWithBackendMicroserviceRootUrl:(NSURL * _Nonnull)backendMicroserviceRootUrl OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSURL * _Nonnull backendMicroserviceRootUrl;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// enum of potential micro service deployment states.
typedef SWIFT_ENUM(NSInteger, MIMIKDeploymentState, closed) {
  MIMIKDeploymentStateImageLoaded = 0,
  MIMIKDeploymentStateContainerLoaded = 1,
  MIMIKDeploymentStateUnloaded = 2,
  MIMIKDeploymentStateError = 3,
};


/// micro service status object. Essentially it provides information about the status of a micro service deployment.
/// <ul>
///   <li>
///     deploymentState: Current micro service deployment state.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient21MIMIKDeploymentStatus")
@interface MIMIKDeploymentStatus : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Provides edgeSDK instance specific MIMIKEdgeInfo object. Essentially provides a read only MIMIKEdgeInfo object with edgeSDK instance parameters (nodeId, nodeName, version, accountId) in a completion block.
/// <ul>
///   <li>
///     nodeId: A unique node (device) identifier. It is assigned by the host application during startEdge.
///   </li>
///   <li>
///     nodeName: A node (device) name. It is derived from the device’s system name.
///   </li>
///   <li>
///     _ version: edgeSDK version number.
///   </li>
///   <li>
///     accountId: Currently associated account identifier. It is assigned during account authorization.
///   </li>
///   <li>
///     linkLocalIp: IP address of the interface edgeSDK is currently bound to.
///   </li>
///   <li>
///     supernodeTypeName: A unique supernode type name. It allows nodes to discovered compatible supernodes.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient13MIMIKEdgeInfo")
@interface MIMIKEdgeInfo : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull mimikDescription;
@property (nonatomic, readonly, copy) NSString * _Nonnull mimikDescriptionFormatted;
@property (nonatomic, readonly, copy) NSString * _Nullable nodeId;
@property (nonatomic, readonly, copy) NSString * _Nullable nodeName;
@property (nonatomic, readonly, copy) NSString * _Nullable version;
@property (nonatomic, readonly, copy) NSString * _Nullable accountId;
@property (nonatomic, readonly, copy) NSString * _Nullable linkLocalIp;
@property (nonatomic, readonly, copy) NSString * _Nullable supernodeTypeName;
@property (nonatomic, readonly, copy) NSString * _Nullable port;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient19MIMIKEdgeInfoResult")
@interface MIMIKEdgeInfoResult : NSObject
@property (nonatomic, strong) MIMIKEdgeInfo * _Nullable info;
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSNumber;
@class MIMIKMicroserviceUndeploymentConfig;
@class MIMIKDeploymentStateResult;
@class MIMIKMicroservice;
@class MIMIKMicroserviceImage;
@class MIMIKMicroserviceContainer;
enum MIMIKLogLevel : NSInteger;
@class MIMIKStartupParameters;

/// MIMIKEdgeMobileClient library can help you interact with the following mimik services:
/// <ul>
///   <li>
///     edgeEngine
///   </li>
///   <li>
///     authentication
///   </li>
///   <li>
///     profile
///   </li>
///   <li>
///     thumbnails
///   </li>
///   <li>
///     notifications
///   </li>
///   <li>
///     assessment
///   </li>
///   <li>
///     trackers
///   </li>
///   <li>
///     friends
///   </li>
///   <li>
///     content caching
///   </li>
///   <li>
///     microservice deployment
///   </li>
///   <li>
///   </li>
/// </ul>
SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient21MIMIKEdgeMobileClient")
@interface MIMIKEdgeMobileClient : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Asynchronous edgeEngine startup.
/// important:
/// Repeated calls are ignored and there is no change if edgeEngine is already running.
/// \param completion Completion block with the startup result.
///
- (void)startEdgeEngineWithCompletion:(void (^ _Nonnull)(BOOL))completion;
/// Synchronous edgeEngine shutdown. Main thread blocking.
/// important:
/// Repeated calls are ignored and there is no change if edgeEngine is already shut down.
/// note:
/// It can be assumed that edgeEngine is shut down as soon as this returns.
/// warning:
/// This is main thread blocking due to the nature of how edgeEngine shuts down its dependencies.
/// warning:
/// It usually takes a second or two for this to return and unblock the main thread.
- (void)stopEdgeEngineSynchronously;
- (void)stopEdgeEngine:(void (^ _Nullable)(BOOL))completion;
/// Platform instance information in a completion block.
/// \param completion Completion block with platform instance information.
///
- (void)edgeEngineInfo:(void (^ _Nonnull)(MIMIKEdgeInfo * _Nullable))completion;
/// Unauthorize client library and synchronously shutdown edgeEngine with a working directory reset. Potentially main thread blocking.
/// warning:
/// Stops edgeEngine and resets (removes and recreates) its working directory, essential making it a brand new edgeEngine installation.  Both the user access and edgeEngine access tokens stored by the client library are also erased.
/// \param completion Completion block with a result Bool.
///
- (BOOL)unauthorizeClientLibrarySynchronously SWIFT_WARN_UNUSED_RESULT;
- (void)unauthorizeClientLibraryWithAuthConfig:(MIMIKAuthConfigApp * _Nonnull)authConfig completion:(void (^ _Nonnull)(BOOL))completion;
- (void)unauthorizeWithAuthConfig:(MIMIKAuthConfigApp * _Nonnull)authConfig completion:(void (^ _Nonnull)(BOOL))completion;
/// Starts user authentication using a phone number with a completion block containing the authorization state.
/// note:
/// This is the FIRST step in the user authentication process.
/// note:
/// The user should expect to receive a binding code on the phone number specified, which then needs to be send back via the continueAuthorizationWith call.
/// \param authConfig Configuration for the authentication session.
///
/// \param phoneNumber Phone number to send the binding code to.
///
/// \param completion Completion block with the new authorization state. Look for mfa_token and oob_code values in the state object.
///
- (void)authorizeWithPhoneWithAuthConfig:(MIMIKAuthConfigApp * _Nonnull)authConfig phoneNumber:(NSString * _Nonnull)phoneNumber associate:(BOOL)associate completion:(void (^ _Nonnull)(MIMIKAuthStateResult * _Nonnull))completion;
/// Save an access token for backend microservice calls in the client library.
/// \param token Access token to be used by the client for all backend microservice calls.
///
- (void)saveLibraryUserAccessTokenWithToken:(NSString * _Nonnull)token;
/// Save an access token for edgeEngine microservice calls in the client library.
/// \param token Access token to be used by the client for all edgeEngine microservice calls.
///
- (void)saveLibraryEdgeAccessTokenWithToken:(NSString * _Nonnull)token;
/// Undeploys (removes) a microservice.
/// important:
/// Repeating calls will do nothing.
/// warning:
/// Microservice image will only be removed if it isn’t used by any containers.
/// \param edgeAccessToken edgeEngine access token.
///
/// \param config Undeployment configuration.
///
/// \param completion Completion block with an undeployment state.
///
- (void)undeployMicroserviceWithEdgeAccessToken:(NSString * _Nonnull)edgeAccessToken config:(MIMIKMicroserviceUndeploymentConfig * _Nonnull)config completion:(void (^ _Nonnull)(MIMIKDeploymentStateResult * _Nonnull))completion;
/// List of currently deployed microservices.
/// \param edgeAccessToken edge engine access token to be used for this call.
///
/// \param completion Completion block with an array objects representing the currently deployed microservices.
///
- (void)deployedMicroservicesWithEdgeAccessToken:(NSString * _Nonnull)edgeAccessToken completion:(void (^ _Nonnull)(NSArray<MIMIKMicroservice *> * _Nullable))completion;
/// A currently deployed microservice matching an image id.
/// \param imageId Microservice image id to be matched.
///
/// \param edgeAccessToken edge engine access token to be used for this call.
///
/// \param completion Completion block with an array objects representing the currently deployed microservices.
///
- (void)verifyDeployedMicroserviceMatchingImageId:(NSString * _Nonnull)imageId edgeAccessToken:(NSString * _Nonnull)edgeAccessToken completion:(void (^ _Nonnull)(MIMIKMicroservice * _Nullable))completion;
/// List of currently deployed microservice images.
/// \param edgeAccessToken edge engine access token to be used for this call.
///
/// \param completion Completion block with an array objects representing the currently deployed images.
///
- (void)deployedMicroserviceImagesWithEdgeAccessToken:(NSString * _Nonnull)edgeAccessToken completion:(void (^ _Nonnull)(NSArray<MIMIKMicroserviceImage *> * _Nullable))completion;
/// List of currently deployed microservice containers.
/// \param edgeAccessToken edge engine access token to be used for this call.
///
/// \param completion Completion block with an array objects representing the currently deployed containers.
///
- (void)deployedMicroserviceContainersWithEdgeAccessToken:(NSString * _Nonnull)edgeAccessToken completion:(void (^ _Nonnull)(NSArray<MIMIKMicroserviceContainer *> * _Nullable))completion;
/// Service link to the edgeEngine instance. For example when configuring microservices for deployment.
/// note:
/// Once the service link has been established, it will never change.
/// note:
/// For example http://127.0.0.1:[port-number]
/// warning:
/// The port number is randomly generated when queried the first time, then stored for subsequent restarts and can never change again.
///
/// returns:
/// Service link to the edgeEngine instance.
- (NSString * _Nonnull)edgeEngineServiceLink SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)platformServiceLink SWIFT_WARN_UNUSED_RESULT;
/// Path to the edgeEngine working directory.
/// note:
/// Once the working directory has been established, it will never change.
///
/// returns:
/// Path to the edgeEngine working directory, if it has been established.
- (NSString * _Nullable)edgeEngineWorkingDirectory SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)platformWorkingDirectory SWIFT_WARN_UNUSED_RESULT;
/// WebSocket service link to the edgeEngine instance. For example when configuring microservices for deployment.
/// note:
/// Once the websocket service link has been established, it will never change.
/// note:
/// For example ws://127.0.0.1:[port-number]
/// warning:
/// The port number is randomly generated when queried the first time, then stored for subsequent restarts and can never change again.
///
/// returns:
/// WebSocket service link to the edgeEngine instance.
- (NSString * _Nonnull)edgeEngineWebSocketServiceLink SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)platformWebSocketServiceLink SWIFT_WARN_UNUSED_RESULT;
/// Controls the client library log output level. It does not control the edgeEngine platform console log output level.
/// warning:
/// This does not control the edgeEngine platform console log output level. For that please use setEdgeEngineStartupParameters.
/// note:
/// Unified logging system is used and the messages are tagged with [mimik] [module-name] and then [info] [error] [fault] [debug].
/// note:
///
/// <ul>
///   <li>
///     The default log level is info.
///   </li>
///   <li>
///     Info level outputs [info] [error] and [fault] messages. It doesn’t output [debug] messages.
///   </li>
///   <li>
///     Error level outputs [error] and [fault] messages. It doesn’t output [debug] messages.
///   </li>
///   <li>
///     Debug level outputs all messages. [info], [error], [fault] and [debug].
///   </li>
///   <li>
///     Off level doesn’t output any messages.
///   </li>
/// </ul>
/// \param level The log level to be used for the client library message.
///
- (void)setClientLibraryLogLevelTo:(enum MIMIKLogLevel)to;
- (void)setCustomConfigurationWithConfiguration:(NSString * _Nullable)configuration;
/// Provides a way to set a custom port number for the edgeEngine platform to work on. This can be set only once per application’s installation. Once set with this call, or automatically elsewhere, the client library locks to the port number and cannot be changed anymore.
/// note:
/// Needs to be set before any other edgeEngine configuration settings or calls.
/// \param number Requested edgeEngine port number.
///
///
/// returns:
/// Returns a Bool representing the result of the custom port number request.
- (BOOL)setCustomPortNumberWithNumber:(int32_t)number SWIFT_WARN_UNUSED_RESULT;
/// Specifies mimik edgeEngine startup parameters to be used during edgeEngine initialization.
/// important:
/// This method has to be called BEFORE calling the startEdge API.
/// important:
/// optional logLevel controls the level of console log output from the edgeEngine platform.
/// important:
/// optional nodeInfoLevel controls the level of node information visible to other nodes on the network.
/// important:
/// optional nodeName is the name visible to other nodes on the network.
/// \param parameters An object representing the startup parameters.
///
- (void)setEdgeEngineStartupParametersWithParameters:(MIMIKStartupParameters * _Nullable)parameters;
- (void)setEdgeEngineCustomStartupParametersWithParameters:(MIMIKStartupParameters * _Nullable)parameters;
@end




@interface MIMIKEdgeMobileClient (SWIFT_EXTENSION(MIMIKEdgeMobileClient))
@end


SWIFT_CLASS("_TtCC21MIMIKEdgeMobileClient21MIMIKEdgeMobileClient26MIMIKDeploymentStateResult")
@interface MIMIKDeploymentStateResult : NSObject
@property (nonatomic, strong) MIMIKDeploymentStatus * _Nullable status;
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





























SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient11MIMIKFriend")
@interface MIMIKFriend : NSObject
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable accountId;
@property (nonatomic, copy) NSString * _Nullable thumbnailURL;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient25MIMIKGenericContentResult")
@interface MIMIKGenericContentResult : NSObject
@property (nonatomic) id _Nullable content;
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum MIMIKLogSubSystem : NSInteger;

/// Console logging class used by [mimik] modules and applications to tag and structure console log output in an organized and human readable format.
SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient8MIMIKLog")
@interface MIMIKLog : NSObject
/// Returns the current logging level. mimik modules are using Apple’s unified logging system and the messages are tagged with [mimik] [module-name] and then the logging level [info] [error] [fault] [debug].
/// note:
/// Default level is info.
/// note:
/// Info level outputs [info] [error] and [fault] messages. It doesn’t output [debug] messages.
/// note:
/// Error level outputs [error] and [fault] messages. It doesn’t output [debug] messages.
/// note:
/// Debug level outputs all messages. [info], [error], [fault] and [debug].
/// \param level Requested logging level.
///
+ (enum MIMIKLogLevel)selectedLoggingLevelWithSubsystem:(enum MIMIKLogSubSystem)subsystem SWIFT_WARN_UNUSED_RESULT;
/// Provides a way to control the amount of logging output. mimik modules are using Apple’s unified logging system and the messages are tagged with [mimik] [module-name] and then the logging level [debug] [info] [error] [fault].
/// note:
/// Default level is info.
/// note:
/// Info level outputs [info] [error] and [fault] messages. It doesn’t output [debug] messages.
/// note:
/// Error level outputs [error] and [fault] messages. It doesn’t output [debug] messages.
/// note:
/// Debug level outputs all messages. [info], [error], [fault] and [debug].
/// note:
/// Off level doesn’t output any messages.
/// \param level Requested logging level.
///
+ (void)setClientLibraryLogLevelInternalTo:(enum MIMIKLogLevel)to subsystem:(enum MIMIKLogSubSystem)subsystem;
/// Logs a [mimik] tagged message to the console log and tags and assigns it to the selected category.
/// \param message the actual message being logged.
///
/// \param type message category (debug, info, error, fault).
///
/// \param value any string value not available during compilation time to be included at the end of the logged message.
///
/// \param displayPrivately Messages will be logged publicly by default. This means they will be visible in the device console. If you’d like to log messages privately set this parameter to true.
///
+ (void)logWithMessage:(NSString * _Nonnull)message type:(enum MIMIKLogLevel)type value:(NSString * _Nullable)value subsystem:(enum MIMIKLogSubSystem)subsystem displayPrivately:(BOOL)displayPrivately;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// enum of potential logging levels.
typedef SWIFT_ENUM(NSInteger, MIMIKLogLevel, closed) {
  MIMIKLogLevelDebug = 0,
  MIMIKLogLevelInfo = 1,
  MIMIKLogLevelError = 2,
  MIMIKLogLevelFault = 3,
  MIMIKLogLevelOff = 47,
};

/// enum of potential logging levels.
typedef SWIFT_ENUM(NSInteger, MIMIKLogSubSystem, closed) {
  MIMIKLogSubSystemMimikEdgeMobileClient = 0,
  MIMIKLogSubSystemMimikEdgeMobileClientTracing = 1,
  MIMIKLogSubSystemMimikEdgeMobileClientAdapter = 2,
  MIMIKLogSubSystemMimikEdgeMobileClientFinance = 3,
  MIMIKLogSubSystemThird_party_app = 100,
  MIMIKLogSubSystemMimik_example_app = 101,
  MIMIKLogSubSystemMimik_access_app = 102,
};


SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient17MIMIKMicroservice")
@interface MIMIKMicroservice : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient26MIMIKMicroserviceContainer")
@interface MIMIKMicroserviceContainer : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Micro service configuration object. Used for micro service deployment.
/// <ul>
///   <li>
///     imageName: Name of your microservice image.
///   </li>
///   <li>
///     containerName: Name of your microservice container.
///   </li>
///   <li>
///     baseApiPath: A path to deploy your micro service to.
///   </li>
///   <li>
///     envVariables: Any extra environment variables for your micro service.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient33MIMIKMicroserviceDeploymentConfig")
@interface MIMIKMicroserviceDeploymentConfig : NSObject
- (nonnull instancetype)initWithImageName:(NSString * _Nonnull)imageName containerName:(NSString * _Nonnull)containerName baseApiPath:(NSString * _Nonnull)baseApiPath envVariables:(NSDictionary<NSString *, NSString *> * _Nonnull)envVariables OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nonnull imageName;
@property (nonatomic, copy) NSString * _Nonnull containerName;
@property (nonatomic, copy) NSString * _Nonnull baseApiPath;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull envVariables;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient22MIMIKMicroserviceImage")
@interface MIMIKMicroserviceImage : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Micro service configuration object. Used for micro service deployment.
/// <ul>
///   <li>
///     edgeAccessToken: Access token for the mimik edge instance.
///   </li>
///   <li>
///     imageName: Name of your microservice image.
///   </li>
///   <li>
///     containerName: Name of your microservice container.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient35MIMIKMicroserviceUndeploymentConfig")
@interface MIMIKMicroserviceUndeploymentConfig : NSObject
- (nonnull instancetype)initWithEdgeAccessToken:(NSString * _Nonnull)edgeAccessToken imageName:(NSString * _Nonnull)imageName containerName:(NSString * _Nonnull)containerName OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nonnull edgeAccessToken;
@property (nonatomic, copy) NSString * _Nonnull imageName;
@property (nonatomic, copy) NSString * _Nonnull containerName;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient22MIMIKStartupParameters")
@interface MIMIKStartupParameters : NSObject <NSCoding>
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// enum of potential edgeSDK lifecycle changing events.
typedef SWIFT_ENUM(NSInteger, MIMIKStateChangingEvent, closed) {
  MIMIKStateChangingEventUnknown = 0,
  MIMIKStateChangingEventUIApplicationWillEnterForeground = 1,
  MIMIKStateChangingEventUIApplicationDidEnterBackground = 2,
  MIMIKStateChangingEventUIApplicationWillTerminate = 3,
  MIMIKStateChangingEventUIApplicationWillResignActive = 4,
  MIMIKStateChangingEventStartupRequest = 5,
  MIMIKStateChangingEventShutdownRequest = 6,
};


SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient10MMKRequest")
@interface MMKRequest : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21MIMIKEdgeMobileClient8MMKTools")
@interface MMKTools : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
