#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/PlayerPrefsPersistence.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IPersistence_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__PlayerPrefsPersistence_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::PlayerPrefsPersistence.SaveValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::PlayerPrefsPersistence::*)(::StringW, int32_t)>(&::Unity::Services::Analytics::Internal::PlayerPrefsPersistence::SaveValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e92e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::PlayerPrefsPersistence*>::get(),
                        "SaveValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::PlayerPrefsPersistence.LoadValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Analytics::Internal::PlayerPrefsPersistence::*)(::StringW)>(&::Unity::Services::Analytics::Internal::PlayerPrefsPersistence::LoadValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e92e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::PlayerPrefsPersistence*>::get(),
                        "LoadValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::PlayerPrefsPersistence._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::PlayerPrefsPersistence::*)()>(&::Unity::Services::Analytics::Internal::PlayerPrefsPersistence::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8b1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::PlayerPrefsPersistence*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Analytics::Internal::PlayerPrefsPersistence::SaveValue(::StringW  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::PlayerPrefsPersistence*>::get(),
                        "SaveValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline int32_t Unity::Services::Analytics::Internal::PlayerPrefsPersistence::LoadValue(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::PlayerPrefsPersistence*>::get(),
                        "LoadValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
inline void Unity::Services::Analytics::Internal::PlayerPrefsPersistence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::PlayerPrefsPersistence*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::Internal::PlayerPrefsPersistence* Unity::Services::Analytics::Internal::PlayerPrefsPersistence::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::PlayerPrefsPersistence*>());
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IPersistence"
constexpr  Unity::Services::Analytics::Internal::PlayerPrefsPersistence::operator ::Unity::Services::Analytics::Internal::IPersistence*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IPersistence*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IPersistence"
constexpr ::Unity::Services::Analytics::Internal::IPersistence* Unity::Services::Analytics::Internal::PlayerPrefsPersistence::i___Unity__Services__Analytics__Internal__IPersistence() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IPersistence*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::PlayerPrefsPersistence::PlayerPrefsPersistence()   {
}
