#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/PlayerInfo.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__PlayerInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Services/Authentication/zzzz__ExternalIdentity_def.hpp"
#include "Unity/Services/Authentication/zzzz__Identity_def.hpp"
#include "Unity/Services/Authentication/zzzz__User_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::PlayerInfo.get_Identities
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>* (::Unity::Services::Authentication::PlayerInfo::*)()>(&::Unity::Services::Authentication::PlayerInfo::get_Identities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        "get_Identities",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::PlayerInfo.set_Username
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::PlayerInfo::*)(::StringW)>(&::Unity::Services::Authentication::PlayerInfo::set_Username)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        "set_Username",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::PlayerInfo.set_LastPasswordUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::PlayerInfo::*)(::System::Nullable_1<::System::DateTime>)>(&::Unity::Services::Authentication::PlayerInfo::set_LastPasswordUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        "set_LastPasswordUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::PlayerInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::PlayerInfo::*)(::StringW)>(&::Unity::Services::Authentication::PlayerInfo::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e948dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::PlayerInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::PlayerInfo::*)(::Unity::Services::Authentication::User*)>(&::Unity::Services::Authentication::PlayerInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e94964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::User*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::PlayerInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::PlayerInfo::*)(::StringW, ::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*, ::StringW, ::StringW)>(&::Unity::Services::Authentication::PlayerInfo::_ctor)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2e98160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void Unity::Services::Authentication::PlayerInfo::__cordl_internal_set__Id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Id_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::DateTime>& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__CreatedAt_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreatedAt_k__BackingField;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__CreatedAt_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreatedAt_k__BackingField;
}
constexpr void Unity::Services::Authentication::PlayerInfo::__cordl_internal_set__CreatedAt_k__BackingField(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CreatedAt_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>*& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__Identities_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Identities_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>* const& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__Identities_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Identities_k__BackingField;
}
constexpr void Unity::Services::Authentication::PlayerInfo::__cordl_internal_set__Identities_k__BackingField(::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Identities_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__Username_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Username_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__Username_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Username_k__BackingField;
}
constexpr void Unity::Services::Authentication::PlayerInfo::__cordl_internal_set__Username_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Username_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::DateTime>& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__LastPasswordUpdate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastPasswordUpdate_k__BackingField;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Unity::Services::Authentication::PlayerInfo::__cordl_internal_get__LastPasswordUpdate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastPasswordUpdate_k__BackingField;
}
constexpr void Unity::Services::Authentication::PlayerInfo::__cordl_internal_set__LastPasswordUpdate_k__BackingField(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastPasswordUpdate_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>* Unity::Services::Authentication::PlayerInfo::get_Identities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        "get_Identities",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>*, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::PlayerInfo::set_Username(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        "set_Username",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Authentication::PlayerInfo::set_LastPasswordUpdate(::System::Nullable_1<::System::DateTime>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        "set_LastPasswordUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Authentication::PlayerInfo::_ctor(::StringW  playerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerId);
}
inline void Unity::Services::Authentication::PlayerInfo::_ctor(::Unity::Services::Authentication::User*  user)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::User*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void Unity::Services::Authentication::PlayerInfo::_ctor(::StringW  playerId, ::StringW  createdAt, ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*  externalIdentities, ::StringW  username, ::StringW  lastPasswordUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerId, createdAt, externalIdentities, username, lastPasswordUpdate);
}
inline ::Unity::Services::Authentication::PlayerInfo* Unity::Services::Authentication::PlayerInfo::New_ctor(::StringW  playerId)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::PlayerInfo*>(playerId));
}
inline ::Unity::Services::Authentication::PlayerInfo* Unity::Services::Authentication::PlayerInfo::New_ctor(::Unity::Services::Authentication::User*  user)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::PlayerInfo*>(user));
}
inline ::Unity::Services::Authentication::PlayerInfo* Unity::Services::Authentication::PlayerInfo::New_ctor(::StringW  playerId, ::StringW  createdAt, ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*  externalIdentities, ::StringW  username, ::StringW  lastPasswordUpdate)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::PlayerInfo*>(playerId, createdAt, externalIdentities, username, lastPasswordUpdate));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::PlayerInfo::PlayerInfo()   {
}
