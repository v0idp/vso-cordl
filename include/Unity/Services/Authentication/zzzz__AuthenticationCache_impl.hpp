#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationCache_impl.hpp"
#include "Unity/Services/Authentication/zzzz__ICache_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationCache_def.hpp"
#include "Unity/Services/Authentication/zzzz__IProfile_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__ICloudProjectId_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.get_CloudProjectId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationCache::*)()>(&::Unity::Services::Authentication::AuthenticationCache::get_CloudProjectId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e997b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "get_CloudProjectId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.get_Profile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationCache::*)()>(&::Unity::Services::Authentication::AuthenticationCache::get_Profile)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e99850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "get_Profile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.get_Prefix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationCache::*)()>(&::Unity::Services::Authentication::AuthenticationCache::get_Prefix)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e998f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "get_Prefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.get_OldPrefix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationCache::*)()>(&::Unity::Services::Authentication::AuthenticationCache::get_OldPrefix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2e99974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "get_OldPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationCache::*)(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, ::Unity::Services::Authentication::IProfile*)>(&::Unity::Services::Authentication::AuthenticationCache::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e96568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IProfile*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.HasKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Authentication::AuthenticationCache::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationCache::HasKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e999b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "HasKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.DeleteKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationCache::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationCache::DeleteKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e999f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "DeleteKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.GetString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationCache::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationCache::GetString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2e99a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "GetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.SetString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationCache::*)(::StringW, ::StringW)>(&::Unity::Services::Authentication::AuthenticationCache::SetString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2e99a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "SetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.Migrate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationCache::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationCache::Migrate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e99aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "Migrate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.GetKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationCache::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationCache::GetKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e999d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "GetKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationCache.GetOldKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationCache::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationCache::GetOldKey)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2e99b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "GetOldKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*& Unity::Services::Authentication::AuthenticationCache::__cordl_internal_get_m_CloudProjectId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CloudProjectId;
}
constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* const& Unity::Services::Authentication::AuthenticationCache::__cordl_internal_get_m_CloudProjectId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CloudProjectId;
}
constexpr void Unity::Services::Authentication::AuthenticationCache::__cordl_internal_set_m_CloudProjectId(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CloudProjectId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::IProfile*& Unity::Services::Authentication::AuthenticationCache::__cordl_internal_get_m_Profile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Profile;
}
constexpr ::Unity::Services::Authentication::IProfile* const& Unity::Services::Authentication::AuthenticationCache::__cordl_internal_get_m_Profile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Profile;
}
constexpr void Unity::Services::Authentication::AuthenticationCache::__cordl_internal_set_m_Profile(::Unity::Services::Authentication::IProfile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Profile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Unity::Services::Authentication::AuthenticationCache::get_CloudProjectId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "get_CloudProjectId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Authentication::AuthenticationCache::get_Profile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "get_Profile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Authentication::AuthenticationCache::get_Prefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "get_Prefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Authentication::AuthenticationCache::get_OldPrefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "get_OldPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationCache::_ctor(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  cloudProjectId, ::Unity::Services::Authentication::IProfile*  profile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IProfile*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cloudProjectId, profile);
}
inline bool Unity::Services::Authentication::AuthenticationCache::HasKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "HasKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline void Unity::Services::Authentication::AuthenticationCache::DeleteKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "DeleteKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline ::StringW Unity::Services::Authentication::AuthenticationCache::GetString(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "GetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline void Unity::Services::Authentication::AuthenticationCache::SetString(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "SetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void Unity::Services::Authentication::AuthenticationCache::Migrate(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "Migrate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline ::StringW Unity::Services::Authentication::AuthenticationCache::GetKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "GetKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::StringW Unity::Services::Authentication::AuthenticationCache::GetOldKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationCache*>::get(),
                        "GetOldKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::Unity::Services::Authentication::AuthenticationCache* Unity::Services::Authentication::AuthenticationCache::New_ctor(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  cloudProjectId, ::Unity::Services::Authentication::IProfile*  profile)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationCache*>(cloudProjectId, profile));
}
/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationCache"
constexpr  Unity::Services::Authentication::AuthenticationCache::operator ::Unity::Services::Authentication::IAuthenticationCache*() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationCache*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationCache"
constexpr ::Unity::Services::Authentication::IAuthenticationCache* Unity::Services::Authentication::AuthenticationCache::i___Unity__Services__Authentication__IAuthenticationCache() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationCache*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Authentication::ICache"
constexpr  Unity::Services::Authentication::AuthenticationCache::operator ::Unity::Services::Authentication::ICache*() noexcept {
return static_cast<::Unity::Services::Authentication::ICache*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::ICache"
constexpr ::Unity::Services::Authentication::ICache* Unity::Services::Authentication::AuthenticationCache::i___Unity__Services__Authentication__ICache() noexcept {
return static_cast<::Unity::Services::Authentication::ICache*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationCache::AuthenticationCache()   {
}
