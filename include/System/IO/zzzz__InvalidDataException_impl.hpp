#pragma once
// IWYU pragma private; include "System/IO/InvalidDataException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/IO/zzzz__InvalidDataException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::IO::InvalidDataException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::InvalidDataException::*)()>(&::System::IO::InvalidDataException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d4c0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::InvalidDataException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::InvalidDataException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::InvalidDataException::*)(::StringW)>(&::System::IO::InvalidDataException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d4c118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::InvalidDataException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::InvalidDataException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::InvalidDataException::*)(::StringW, ::System::Exception*)>(&::System::IO::InvalidDataException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d4c13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::InvalidDataException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::InvalidDataException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::InvalidDataException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::InvalidDataException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4c160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::InvalidDataException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::InvalidDataException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::InvalidDataException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::InvalidDataException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::InvalidDataException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void System::IO::InvalidDataException::_ctor(::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::InvalidDataException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, innerException);
}
inline void System::IO::InvalidDataException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::InvalidDataException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::IO::InvalidDataException* System::IO::InvalidDataException::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::InvalidDataException*>());
}
inline ::System::IO::InvalidDataException* System::IO::InvalidDataException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::InvalidDataException*>(message));
}
inline ::System::IO::InvalidDataException* System::IO::InvalidDataException::New_ctor(::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::InvalidDataException*>(message, innerException));
}
inline ::System::IO::InvalidDataException* System::IO::InvalidDataException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::InvalidDataException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::IO::InvalidDataException::InvalidDataException()   {
}
