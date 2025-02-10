#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteHintBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__NoteBoardNoteHintBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::VROSC::NoteBoardNoteHintBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteHintBehaviour::*)(::UnityEngine::Renderer*)>(&::VROSC::NoteBoardNoteHintBehaviour::Setup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x176822c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteHintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteHintBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteHintBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::NoteBoardNoteHintBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x176825c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteHintBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteHintBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteHintBehaviour.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteHintBehaviour::*)(::UnityEngine::Color)>(&::VROSC::NoteBoardNoteHintBehaviour::SetColor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1768298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteHintBehaviour*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteHintBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteHintBehaviour::*)()>(&::VROSC::NoteBoardNoteHintBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x176837c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteHintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get__materialBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get__materialBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialBlock;
}
constexpr void VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_set__materialBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get_Playing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Playing;
}
constexpr float_t const& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get_Playing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Playing;
}
constexpr void VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_set_Playing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Playing = value;
}
constexpr ::UnityEngine::Color& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get_UnPlayedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnPlayedColor;
}
constexpr ::UnityEngine::Color const& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get_UnPlayedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnPlayedColor;
}
constexpr void VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_set_UnPlayedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnPlayedColor = value;
}
constexpr ::UnityEngine::Color& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get_PlayedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayedColor;
}
constexpr ::UnityEngine::Color const& VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_get_PlayedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayedColor;
}
constexpr void VROSC::NoteBoardNoteHintBehaviour::__cordl_internal_set_PlayedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayedColor = value;
}
inline void VROSC::NoteBoardNoteHintBehaviour::Setup(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteHintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer);
}
inline void VROSC::NoteBoardNoteHintBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteHintBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::NoteBoardNoteHintBehaviour::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteHintBehaviour*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::NoteBoardNoteHintBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteHintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteBoardNoteHintBehaviour* VROSC::NoteBoardNoteHintBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoardNoteHintBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardNoteHintBehaviour::NoteBoardNoteHintBehaviour()   {
}
