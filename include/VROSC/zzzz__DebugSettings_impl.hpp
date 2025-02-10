#pragma once
// IWYU pragma private; include "VROSC/DebugSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__DebugSettings_def.hpp"
//  Writing Method size for method: ::VROSC::DebugSettings.SaveValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::VROSC::DebugSettings::SaveValues)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1712438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get(),
                        "SaveValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DebugSettings.WriteBool
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&::VROSC::DebugSettings::WriteBool)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17124fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get(),
                        "WriteBool",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DebugSettings.ReadBool
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::VROSC::DebugSettings::ReadBool)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1712508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get(),
                        "ReadBool",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DebugSettings.LoadValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::VROSC::DebugSettings::LoadValues)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1712524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get(),
                        "LoadValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::DebugSettings::setStaticF_DisableSpectatorCamera(bool  value)  {
::cordl_internals::setStaticField<bool, "DisableSpectatorCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get>(std::forward<bool>(value));
}
inline bool VROSC::DebugSettings::getStaticF_DisableSpectatorCamera()  {
return ::cordl_internals::getStaticField<bool, "DisableSpectatorCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get>();
}
inline void VROSC::DebugSettings::setStaticF_ShowReactToBeatLines(bool  value)  {
::cordl_internals::setStaticField<bool, "ShowReactToBeatLines", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get>(std::forward<bool>(value));
}
inline bool VROSC::DebugSettings::getStaticF_ShowReactToBeatLines()  {
return ::cordl_internals::getStaticField<bool, "ShowReactToBeatLines", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get>();
}
inline void VROSC::DebugSettings::setStaticF_ShowLoopData(bool  value)  {
::cordl_internals::setStaticField<bool, "ShowLoopData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get>(std::forward<bool>(value));
}
inline bool VROSC::DebugSettings::getStaticF_ShowLoopData()  {
return ::cordl_internals::getStaticField<bool, "ShowLoopData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get>();
}
inline void VROSC::DebugSettings::SaveValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get(),
                        "SaveValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void VROSC::DebugSettings::WriteBool(::StringW  key, bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get(),
                        "WriteBool",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, value);
}
inline bool VROSC::DebugSettings::ReadBool(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get(),
                        "ReadBool",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key);
}
inline void VROSC::DebugSettings::LoadValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugSettings*>::get(),
                        "LoadValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::VROSC::DebugSettings::DebugSettings()   {
}
