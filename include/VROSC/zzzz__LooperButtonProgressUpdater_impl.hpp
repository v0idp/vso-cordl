#pragma once
// IWYU pragma private; include "VROSC/LooperButtonProgressUpdater.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LooperButtonProgressUpdater_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
//  Writing Method size for method: ::VROSC::LooperButtonProgressUpdater.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LooperButtonProgressUpdater::*)()>(&::VROSC::LooperButtonProgressUpdater::Awake)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x174140c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperButtonProgressUpdater*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LooperButtonProgressUpdater.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LooperButtonProgressUpdater::*)(::UnityEngine::Color)>(&::VROSC::LooperButtonProgressUpdater::SetColor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1741548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperButtonProgressUpdater*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LooperButtonProgressUpdater.SetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LooperButtonProgressUpdater::*)(float_t, float_t)>(&::VROSC::LooperButtonProgressUpdater::SetValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1741434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperButtonProgressUpdater*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LooperButtonProgressUpdater._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LooperButtonProgressUpdater::*)()>(&::VROSC::LooperButtonProgressUpdater::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1741620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperButtonProgressUpdater*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__adjustableMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__adjustableMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr void VROSC::LooperButtonProgressUpdater::__cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adjustableMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr ::UnityEngine::Color const& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void VROSC::LooperButtonProgressUpdater::__cordl_internal_set__color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____color = value;
}
constexpr float_t& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__beatLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatLength;
}
constexpr float_t const& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__beatLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatLength;
}
constexpr void VROSC::LooperButtonProgressUpdater::__cordl_internal_set__beatLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beatLength = value;
}
constexpr float_t& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__previewValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewValue;
}
constexpr float_t const& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__previewValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewValue;
}
constexpr void VROSC::LooperButtonProgressUpdater::__cordl_internal_set__previewValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previewValue = value;
}
constexpr float_t& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__flashValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flashValue;
}
constexpr float_t const& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__flashValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flashValue;
}
constexpr void VROSC::LooperButtonProgressUpdater::__cordl_internal_set__flashValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flashValue = value;
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__loopPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayer;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__loopPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayer;
}
constexpr void VROSC::LooperButtonProgressUpdater::__cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__playing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr bool const& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__playing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr void VROSC::LooperButtonProgressUpdater::__cordl_internal_set__playing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playing = value;
}
constexpr float_t& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr float_t const& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr void VROSC::LooperButtonProgressUpdater::__cordl_internal_set__progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progress = value;
}
constexpr int32_t& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__loops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loops;
}
constexpr int32_t const& VROSC::LooperButtonProgressUpdater::__cordl_internal_get__loops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loops;
}
constexpr void VROSC::LooperButtonProgressUpdater::__cordl_internal_set__loops(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loops = value;
}
inline void VROSC::LooperButtonProgressUpdater::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperButtonProgressUpdater*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LooperButtonProgressUpdater::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperButtonProgressUpdater*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::LooperButtonProgressUpdater::SetValue(float_t  value, float_t  flashValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperButtonProgressUpdater*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, flashValue);
}
inline void VROSC::LooperButtonProgressUpdater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LooperButtonProgressUpdater*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LooperButtonProgressUpdater* VROSC::LooperButtonProgressUpdater::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LooperButtonProgressUpdater*>());
}
// Ctor Parameters []
constexpr ::VROSC::LooperButtonProgressUpdater::LooperButtonProgressUpdater()   {
}
