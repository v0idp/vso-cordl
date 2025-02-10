#pragma once
// IWYU pragma private; include "VROSC/LooperSettings.hpp"
#include "VROSC/zzzz__ToolSettings_impl.hpp"
#include "VROSC/zzzz__LooperSettings_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/zzzz__UIColorGetter_def.hpp"
#include "VROSC/zzzz__LoopCompressionSettings_def.hpp"
//  Writing Method size for method: ::VROSC::LooperSettings.GetRandomColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::LooperSettings::*)()>(&::VROSC::LooperSettings::GetRandomColor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17109bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperSettings*>::get(),
                        "GetRandomColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LooperSettings.CompressLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> (::VROSC::LooperSettings::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>)>(&::VROSC::LooperSettings::CompressLoop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1710a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperSettings*>::get(),
                        "CompressLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LooperSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LooperSettings::*)()>(&::VROSC::LooperSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::VROSC::UI::UIColorGetter>,::Array<::UnityW<::VROSC::UI::UIColorGetter>>*>& VROSC::LooperSettings::__cordl_internal_get__loopPlayerColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayerColors;
}
constexpr ::ArrayW<::UnityW<::VROSC::UI::UIColorGetter>,::Array<::UnityW<::VROSC::UI::UIColorGetter>>*> const& VROSC::LooperSettings::__cordl_internal_get__loopPlayerColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayerColors;
}
constexpr void VROSC::LooperSettings::__cordl_internal_set__loopPlayerColors(::ArrayW<::UnityW<::VROSC::UI::UIColorGetter>,::Array<::UnityW<::VROSC::UI::UIColorGetter>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopPlayerColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopCompressionSettings*& VROSC::LooperSettings::__cordl_internal_get__compressionSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressionSettings;
}
constexpr ::VROSC::LoopCompressionSettings* const& VROSC::LooperSettings::__cordl_internal_get__compressionSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressionSettings;
}
constexpr void VROSC::LooperSettings::__cordl_internal_set__compressionSettings(::VROSC::LoopCompressionSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compressionSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Color VROSC::LooperSettings::GetRandomColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperSettings*>::get(),
                        "GetRandomColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> VROSC::LooperSettings::CompressLoop(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperSettings*>::get(),
                        "CompressLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, false>(this, ___internal_method, audio);
}
inline void VROSC::LooperSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LooperSettings* VROSC::LooperSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LooperSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::LooperSettings::LooperSettings()   {
}
