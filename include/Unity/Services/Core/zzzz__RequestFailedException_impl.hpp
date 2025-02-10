#pragma once
// IWYU pragma private; include "Unity/Services/Core/RequestFailedException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Unity/Services/Core/zzzz__RequestFailedException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::RequestFailedException.get_ErrorCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Core::RequestFailedException::*)()>(&::Unity::Services::Core::RequestFailedException::get_ErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9b9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::RequestFailedException*>::get(),
                        "get_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::RequestFailedException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::RequestFailedException::*)(int32_t, ::StringW, ::System::Exception*)>(&::Unity::Services::Core::RequestFailedException::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e9b9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::RequestFailedException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Services::Core::RequestFailedException::__cordl_internal_get__ErrorCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr int32_t const& Unity::Services::Core::RequestFailedException::__cordl_internal_get__ErrorCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr void Unity::Services::Core::RequestFailedException::__cordl_internal_set__ErrorCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorCode_k__BackingField = value;
}
inline int32_t Unity::Services::Core::RequestFailedException::get_ErrorCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::RequestFailedException*>::get(),
                        "get_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Core::RequestFailedException::_ctor(int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::RequestFailedException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, message, innerException);
}
inline ::Unity::Services::Core::RequestFailedException* Unity::Services::Core::RequestFailedException::New_ctor(int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::RequestFailedException*>(errorCode, message, innerException));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::RequestFailedException::RequestFailedException()   {
}
