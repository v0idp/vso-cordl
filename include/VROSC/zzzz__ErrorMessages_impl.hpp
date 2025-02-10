#pragma once
// IWYU pragma private; include "VROSC/ErrorMessages.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__Error_impl.hpp"
#include "VROSC/zzzz__ErrorMessages_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__ErrorMessages_def.hpp"
//  Writing Method size for method: ::VROSC::ErrorMessages_ErrorMessagePair._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ErrorMessages_ErrorMessagePair::*)()>(&::VROSC::ErrorMessages_ErrorMessagePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18848b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorMessages_ErrorMessagePair*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::Error& VROSC::ErrorMessages_ErrorMessagePair::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::VROSC::Error const& VROSC::ErrorMessages_ErrorMessagePair::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void VROSC::ErrorMessages_ErrorMessagePair::__cordl_internal_set_Id(::VROSC::Error  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr ::StringW& VROSC::ErrorMessages_ErrorMessagePair::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& VROSC::ErrorMessages_ErrorMessagePair::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void VROSC::ErrorMessages_ErrorMessagePair::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ErrorMessages_ErrorMessagePair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorMessages_ErrorMessagePair*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ErrorMessages_ErrorMessagePair* VROSC::ErrorMessages_ErrorMessagePair::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ErrorMessages_ErrorMessagePair*>());
}
// Ctor Parameters []
constexpr ::VROSC::ErrorMessages_ErrorMessagePair::ErrorMessages_ErrorMessagePair()   {
}
//  Writing Method size for method: ::VROSC::ErrorMessages._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ErrorMessages::*)()>(&::VROSC::ErrorMessages::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x188483c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorMessages*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VROSC::ErrorMessages_ErrorMessagePair*>*& VROSC::ErrorMessages::__cordl_internal_get_Errors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Errors;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ErrorMessages_ErrorMessagePair*>* const& VROSC::ErrorMessages::__cordl_internal_get_Errors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Errors;
}
constexpr void VROSC::ErrorMessages::__cordl_internal_set_Errors(::System::Collections::Generic::List_1<::VROSC::ErrorMessages_ErrorMessagePair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Errors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ErrorMessages::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ErrorMessages*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ErrorMessages* VROSC::ErrorMessages::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ErrorMessages*>());
}
// Ctor Parameters []
constexpr ::VROSC::ErrorMessages::ErrorMessages()   {
}
