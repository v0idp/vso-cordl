#pragma once
// IWYU pragma private; include "Firebase/InitializationException.hpp"
#include "Firebase/zzzz__InitResult_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Firebase/zzzz__InitializationException_def.hpp"
#include "Firebase/zzzz__InitResult_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Firebase::InitializationException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::InitializationException::*)(::Firebase::InitResult)>(&::Firebase::InitializationException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x18f6b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::InitializationException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::InitResult>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::InitializationException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::InitializationException::*)(::Firebase::InitResult, ::StringW)>(&::Firebase::InitializationException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x18f1010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::InitializationException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::InitResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::InitializationException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::InitializationException::*)(::Firebase::InitResult, ::StringW, ::System::Exception*)>(&::Firebase::InitializationException::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x18f3420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::InitializationException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::InitResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::InitializationException.set_InitResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::InitializationException::*)(::Firebase::InitResult)>(&::Firebase::InitializationException::set_InitResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18f6bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::InitializationException*>::get(),
                        "set_InitResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::InitResult>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::InitResult& Firebase::InitializationException::__cordl_internal_get__InitResult_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitResult_k__BackingField;
}
constexpr ::Firebase::InitResult const& Firebase::InitializationException::__cordl_internal_get__InitResult_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitResult_k__BackingField;
}
constexpr void Firebase::InitializationException::__cordl_internal_set__InitResult_k__BackingField(::Firebase::InitResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InitResult_k__BackingField = value;
}
inline void Firebase::InitializationException::_ctor(::Firebase::InitResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::InitializationException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::InitResult>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline void Firebase::InitializationException::_ctor(::Firebase::InitResult  result, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::InitializationException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::InitResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, message);
}
inline void Firebase::InitializationException::_ctor(::Firebase::InitResult  result, ::StringW  message, ::System::Exception*  inner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::InitializationException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::InitResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, message, inner);
}
inline void Firebase::InitializationException::set_InitResult(::Firebase::InitResult  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::InitializationException*>::get(),
                        "set_InitResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::InitResult>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::InitializationException* Firebase::InitializationException::New_ctor(::Firebase::InitResult  result)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::InitializationException*>(result));
}
inline ::Firebase::InitializationException* Firebase::InitializationException::New_ctor(::Firebase::InitResult  result, ::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::InitializationException*>(result, message));
}
inline ::Firebase::InitializationException* Firebase::InitializationException::New_ctor(::Firebase::InitResult  result, ::StringW  message, ::System::Exception*  inner)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::InitializationException*>(result, message, inner));
}
// Ctor Parameters []
constexpr ::Firebase::InitializationException::InitializationException()   {
}
