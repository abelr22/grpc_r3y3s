// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: fingerprint.proto

#include "fingerprint.pb.h"
#include "fingerprint.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace fingerprint {

static const char* FingerPrint_method_names[] = {
  "/fingerprint.FingerPrint/EnrollFingerprint",
  "/fingerprint.FingerPrint/VerifyFingerprint",
  "/fingerprint.FingerPrint/CheckDuplicate",
};

std::unique_ptr< FingerPrint::Stub> FingerPrint::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FingerPrint::Stub> stub(new FingerPrint::Stub(channel));
  return stub;
}

FingerPrint::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_EnrollFingerprint_(FingerPrint_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_VerifyFingerprint_(FingerPrint_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CheckDuplicate_(FingerPrint_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FingerPrint::Stub::EnrollFingerprint(::grpc::ClientContext* context, const ::fingerprint::EnrollmentRequest& request, ::fingerprint::EnrolledFMD* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fingerprint::EnrollmentRequest, ::fingerprint::EnrolledFMD, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EnrollFingerprint_, context, request, response);
}

void FingerPrint::Stub::experimental_async::EnrollFingerprint(::grpc::ClientContext* context, const ::fingerprint::EnrollmentRequest* request, ::fingerprint::EnrolledFMD* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fingerprint::EnrollmentRequest, ::fingerprint::EnrolledFMD, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EnrollFingerprint_, context, request, response, std::move(f));
}

void FingerPrint::Stub::experimental_async::EnrollFingerprint(::grpc::ClientContext* context, const ::fingerprint::EnrollmentRequest* request, ::fingerprint::EnrolledFMD* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EnrollFingerprint_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fingerprint::EnrolledFMD>* FingerPrint::Stub::PrepareAsyncEnrollFingerprintRaw(::grpc::ClientContext* context, const ::fingerprint::EnrollmentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fingerprint::EnrolledFMD, ::fingerprint::EnrollmentRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EnrollFingerprint_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fingerprint::EnrolledFMD>* FingerPrint::Stub::AsyncEnrollFingerprintRaw(::grpc::ClientContext* context, const ::fingerprint::EnrollmentRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEnrollFingerprintRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FingerPrint::Stub::VerifyFingerprint(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest& request, ::fingerprint::VerificationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fingerprint::VerificationRequest, ::fingerprint::VerificationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_VerifyFingerprint_, context, request, response);
}

void FingerPrint::Stub::experimental_async::VerifyFingerprint(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest* request, ::fingerprint::VerificationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fingerprint::VerificationRequest, ::fingerprint::VerificationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_VerifyFingerprint_, context, request, response, std::move(f));
}

void FingerPrint::Stub::experimental_async::VerifyFingerprint(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest* request, ::fingerprint::VerificationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_VerifyFingerprint_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fingerprint::VerificationResponse>* FingerPrint::Stub::PrepareAsyncVerifyFingerprintRaw(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fingerprint::VerificationResponse, ::fingerprint::VerificationRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_VerifyFingerprint_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fingerprint::VerificationResponse>* FingerPrint::Stub::AsyncVerifyFingerprintRaw(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncVerifyFingerprintRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FingerPrint::Stub::CheckDuplicate(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest& request, ::fingerprint::CheckDuplicateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::fingerprint::VerificationRequest, ::fingerprint::CheckDuplicateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CheckDuplicate_, context, request, response);
}

void FingerPrint::Stub::experimental_async::CheckDuplicate(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest* request, ::fingerprint::CheckDuplicateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::fingerprint::VerificationRequest, ::fingerprint::CheckDuplicateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CheckDuplicate_, context, request, response, std::move(f));
}

void FingerPrint::Stub::experimental_async::CheckDuplicate(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest* request, ::fingerprint::CheckDuplicateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CheckDuplicate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::fingerprint::CheckDuplicateResponse>* FingerPrint::Stub::PrepareAsyncCheckDuplicateRaw(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::fingerprint::CheckDuplicateResponse, ::fingerprint::VerificationRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CheckDuplicate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::fingerprint::CheckDuplicateResponse>* FingerPrint::Stub::AsyncCheckDuplicateRaw(::grpc::ClientContext* context, const ::fingerprint::VerificationRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCheckDuplicateRaw(context, request, cq);
  result->StartCall();
  return result;
}

FingerPrint::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FingerPrint_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FingerPrint::Service, ::fingerprint::EnrollmentRequest, ::fingerprint::EnrolledFMD, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FingerPrint::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fingerprint::EnrollmentRequest* req,
             ::fingerprint::EnrolledFMD* resp) {
               return service->EnrollFingerprint(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FingerPrint_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FingerPrint::Service, ::fingerprint::VerificationRequest, ::fingerprint::VerificationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FingerPrint::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fingerprint::VerificationRequest* req,
             ::fingerprint::VerificationResponse* resp) {
               return service->VerifyFingerprint(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FingerPrint_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FingerPrint::Service, ::fingerprint::VerificationRequest, ::fingerprint::CheckDuplicateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FingerPrint::Service* service,
             ::grpc::ServerContext* ctx,
             const ::fingerprint::VerificationRequest* req,
             ::fingerprint::CheckDuplicateResponse* resp) {
               return service->CheckDuplicate(ctx, req, resp);
             }, this)));
}

FingerPrint::Service::~Service() {
}

::grpc::Status FingerPrint::Service::EnrollFingerprint(::grpc::ServerContext* context, const ::fingerprint::EnrollmentRequest* request, ::fingerprint::EnrolledFMD* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FingerPrint::Service::VerifyFingerprint(::grpc::ServerContext* context, const ::fingerprint::VerificationRequest* request, ::fingerprint::VerificationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FingerPrint::Service::CheckDuplicate(::grpc::ServerContext* context, const ::fingerprint::VerificationRequest* request, ::fingerprint::CheckDuplicateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace fingerprint

