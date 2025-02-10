#pragma once
// IWYU pragma private; include "Unity/Services/Core/ExternalUserIdProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/zzzz__ExternalUserIdProperty_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::ExternalUserIdProperty.get_UserId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::ExternalUserIdProperty::*)()>(&::Unity::Services::Core::ExternalUserIdProperty::get_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9b674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::ExternalUserIdProperty*>::get(),
                        "get_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::ExternalUserIdProperty.set_UserId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::ExternalUserIdProperty::*)(::StringW)>(&::Unity::Services::Core::ExternalUserIdProperty::set_UserId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e9b67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::ExternalUserIdProperty*>::get(),
                        "set_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::ExternalUserIdProperty._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::ExternalUserIdProperty::*)()>(&::Unity::Services::Core::ExternalUserIdProperty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9b69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::ExternalUserIdProperty*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& Unity::Services::Core::ExternalUserIdProperty::__cordl_internal_get_UserIdChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserIdChanged;
}
constexpr ::System::Action_1<::StringW>* const& Unity::Services::Core::ExternalUserIdProperty::__cordl_internal_get_UserIdChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserIdChanged;
}
constexpr void Unity::Services::Core::ExternalUserIdProperty::__cordl_internal_set_UserIdChanged(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserIdChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Core::ExternalUserIdProperty::__cordl_internal_get_m_UserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UserId;
}
constexpr ::StringW const& Unity::Services::Core::ExternalUserIdProperty::__cordl_internal_get_m_UserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UserId;
}
constexpr void Unity::Services::Core::ExternalUserIdProperty::__cordl_internal_set_m_UserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Unity::Services::Core::ExternalUserIdProperty::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::ExternalUserIdProperty*>::get(),
                        "get_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Core::ExternalUserIdProperty::set_UserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::ExternalUserIdProperty*>::get(),
                        "set_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Core::ExternalUserIdProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::ExternalUserIdProperty*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::ExternalUserIdProperty* Unity::Services::Core::ExternalUserIdProperty::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::ExternalUserIdProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::ExternalUserIdProperty::ExternalUserIdProperty()   {
}
