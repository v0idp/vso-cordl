#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/ProfileComponent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__IProfile_impl.hpp"
#include "Unity/Services/Authentication/zzzz__ProfileComponent_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Services/Authentication/zzzz__ProfileEventArgs_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::ProfileComponent.get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::ProfileComponent::*)()>(&::Unity::Services::Authentication::ProfileComponent::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e97e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ProfileComponent*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::ProfileComponent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::ProfileComponent::*)(::StringW)>(&::Unity::Services::Authentication::ProfileComponent::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e96464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ProfileComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::ProfileComponent.SetProfile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::ProfileComponent::*)(::StringW)>(&::Unity::Services::Authentication::ProfileComponent::SetProfile)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e97ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ProfileComponent*>::get(),
                        "SetProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Unity::Services::Authentication::ProfileEventArgs*>*& Unity::Services::Authentication::ProfileComponent::__cordl_internal_get_ProfileChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileChange;
}
constexpr ::System::Action_1<::Unity::Services::Authentication::ProfileEventArgs*>* const& Unity::Services::Authentication::ProfileComponent::__cordl_internal_get_ProfileChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileChange;
}
constexpr void Unity::Services::Authentication::ProfileComponent::__cordl_internal_set_ProfileChange(::System::Action_1<::Unity::Services::Authentication::ProfileEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProfileChange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::ProfileComponent::__cordl_internal_get__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr ::StringW const& Unity::Services::Authentication::ProfileComponent::__cordl_internal_get__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr void Unity::Services::Authentication::ProfileComponent::__cordl_internal_set__current(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Unity::Services::Authentication::ProfileComponent::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ProfileComponent*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::ProfileComponent::_ctor(::StringW  profile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ProfileComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline void Unity::Services::Authentication::ProfileComponent::SetProfile(::StringW  profile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ProfileComponent*>::get(),
                        "SetProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline ::Unity::Services::Authentication::ProfileComponent* Unity::Services::Authentication::ProfileComponent::New_ctor(::StringW  profile)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::ProfileComponent*>(profile));
}
/// @brief Convert operator to "::Unity::Services::Authentication::IProfile"
constexpr  Unity::Services::Authentication::ProfileComponent::operator ::Unity::Services::Authentication::IProfile*() noexcept {
return static_cast<::Unity::Services::Authentication::IProfile*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::IProfile"
constexpr ::Unity::Services::Authentication::IProfile* Unity::Services::Authentication::ProfileComponent::i___Unity__Services__Authentication__IProfile() noexcept {
return static_cast<::Unity::Services::Authentication::IProfile*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::ProfileComponent::ProfileComponent()   {
}
