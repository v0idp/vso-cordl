#pragma once
// IWYU pragma private; include "VROSC/UserProfileDataModel.hpp"
#include "VROSC/zzzz__BaseDataModel_impl.hpp"
#include "VROSC/zzzz__UserProfileDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::UserProfileDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UserProfileDataModel::*)()>(&::VROSC::UserProfileDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x187d080;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserProfileDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserProfileDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserProfileDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::UserProfileDataModel::*)()>(&::VROSC::UserProfileDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x187d0c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserProfileDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserProfileDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserProfileDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserProfileDataModel::*)()>(&::VROSC::UserProfileDataModel::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x187c278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserProfileDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::UserProfileDataModel::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& VROSC::UserProfileDataModel::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void VROSC::UserProfileDataModel::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Username)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserProfileDataModel::__cordl_internal_get_Email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr ::StringW const& VROSC::UserProfileDataModel::__cordl_internal_get_Email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr void VROSC::UserProfileDataModel::__cordl_internal_set_Email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Email)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserProfileDataModel::__cordl_internal_get_OculusId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OculusId;
}
constexpr ::StringW const& VROSC::UserProfileDataModel::__cordl_internal_get_OculusId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OculusId;
}
constexpr void VROSC::UserProfileDataModel::__cordl_internal_set_OculusId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OculusId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserProfileDataModel::__cordl_internal_get_OculusUsername()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OculusUsername;
}
constexpr ::StringW const& VROSC::UserProfileDataModel::__cordl_internal_get_OculusUsername() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OculusUsername;
}
constexpr void VROSC::UserProfileDataModel::__cordl_internal_set_OculusUsername(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OculusUsername)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserProfileDataModel::__cordl_internal_get_SteamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamId;
}
constexpr ::StringW const& VROSC::UserProfileDataModel::__cordl_internal_get_SteamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamId;
}
constexpr void VROSC::UserProfileDataModel::__cordl_internal_set_SteamId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SteamId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserProfileDataModel::__cordl_internal_get_SteamUsername()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamUsername;
}
constexpr ::StringW const& VROSC::UserProfileDataModel::__cordl_internal_get_SteamUsername() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamUsername;
}
constexpr void VROSC::UserProfileDataModel::__cordl_internal_set_SteamUsername(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SteamUsername)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserProfileDataModel::__cordl_internal_get_LastLogin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLogin;
}
constexpr ::StringW const& VROSC::UserProfileDataModel::__cordl_internal_get_LastLogin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLogin;
}
constexpr void VROSC::UserProfileDataModel::__cordl_internal_set_LastLogin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LastLogin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserProfileDataModel::__cordl_internal_get_CreationDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreationDate;
}
constexpr ::StringW const& VROSC::UserProfileDataModel::__cordl_internal_get_CreationDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreationDate;
}
constexpr void VROSC::UserProfileDataModel::__cordl_internal_set_CreationDate(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CreationDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::UserProfileDataModel::__cordl_internal_get_AcceptedEULAVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedEULAVersion;
}
constexpr ::StringW const& VROSC::UserProfileDataModel::__cordl_internal_get_AcceptedEULAVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedEULAVersion;
}
constexpr void VROSC::UserProfileDataModel::__cordl_internal_set_AcceptedEULAVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AcceptedEULAVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::UserProfileDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserProfileDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::UserProfileDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserProfileDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::UserProfileDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserProfileDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UserProfileDataModel* VROSC::UserProfileDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserProfileDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserProfileDataModel::UserProfileDataModel()   {
}
