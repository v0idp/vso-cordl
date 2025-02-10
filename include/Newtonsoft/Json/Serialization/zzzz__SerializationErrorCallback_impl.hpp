#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/SerializationErrorCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__SerializationErrorCallback_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationErrorCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::SerializationErrorCallback::*)(::System::Object*, ::System::IntPtr)>(&::Newtonsoft::Json::Serialization::SerializationErrorCallback::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2804038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationErrorCallback.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::SerializationErrorCallback::*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*)>(&::Newtonsoft::Json::Serialization::SerializationErrorCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x280413c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::SerializationErrorCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Newtonsoft::Json::Serialization::SerializationErrorCallback::Invoke(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context, ::Newtonsoft::Json::Serialization::ErrorContext*  errorContext)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o, context, errorContext);
}
inline ::Newtonsoft::Json::Serialization::SerializationErrorCallback* Newtonsoft::Json::Serialization::SerializationErrorCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::SerializationErrorCallback::SerializationErrorCallback()   {
}
