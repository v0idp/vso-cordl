#pragma once
// IWYU pragma private; include "VROSC/VersionDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__VersionDisplay_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::VROSC::VersionDisplay.get_AndroidBundleNumberFilePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::VROSC::VersionDisplay::get_AndroidBundleNumberFilePath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x177b7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VersionDisplay*>::get(),
                        "get_AndroidBundleNumberFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VersionDisplay.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VersionDisplay::*)()>(&::VROSC::VersionDisplay::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x177b858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VersionDisplay*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VersionDisplay.GetAndroidBundleNumberFromFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::VersionDisplay::*)()>(&::VROSC::VersionDisplay::GetAndroidBundleNumberFromFile)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x177b994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VersionDisplay*>::get(),
                        "GetAndroidBundleNumberFromFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VersionDisplay._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VersionDisplay::*)()>(&::VROSC::VersionDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177bc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VersionDisplay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& VROSC::VersionDisplay::__cordl_internal_get__tmpText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& VROSC::VersionDisplay::__cordl_internal_get__tmpText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpText;
}
constexpr void VROSC::VersionDisplay::__cordl_internal_set__tmpText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tmpText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::VersionDisplay::get_AndroidBundleNumberFilePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VersionDisplay*>::get(),
                        "get_AndroidBundleNumberFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void VROSC::VersionDisplay::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VersionDisplay*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW VROSC::VersionDisplay::GetAndroidBundleNumberFromFile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VersionDisplay*>::get(),
                        "GetAndroidBundleNumberFromFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::VersionDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VersionDisplay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::VersionDisplay* VROSC::VersionDisplay::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::VersionDisplay*>());
}
// Ctor Parameters []
constexpr ::VROSC::VersionDisplay::VersionDisplay()   {
}
