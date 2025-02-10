#pragma once
// IWYU pragma private; include "VROSC/ControllerHintBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_impl.hpp"
#include "VROSC/zzzz__NoteBoard_impl.hpp"
#include "VROSC/zzzz__ControllerHintBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
#include "VROSC/zzzz__TouchableObjectsController_def.hpp"
//  Writing Method size for method: ::VROSC::ControllerHintBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerHintBehaviour::*)(::VROSC::HighlightControllerComponents*, ::VROSC::TouchableObjectsController*)>(&::VROSC::ControllerHintBehaviour::Setup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1767a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TouchableObjectsController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerHintBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerHintBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::ControllerHintBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1767abc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerHintBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerHintBehaviour::*)()>(&::VROSC::ControllerHintBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1767ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteBoardNoteController>& VROSC::ControllerHintBehaviour::__cordl_internal_get__noteboardController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteboardController;
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& VROSC::ControllerHintBehaviour::__cordl_internal_get__noteboardController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteboardController;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set__noteboardController(::UnityW<::VROSC::NoteBoardNoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteboardController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::HighlightControllerComponents>& VROSC::ControllerHintBehaviour::__cordl_internal_get__highlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlight;
}
constexpr ::UnityW<::VROSC::HighlightControllerComponents> const& VROSC::ControllerHintBehaviour::__cordl_internal_get__highlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlight;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set__highlight(::UnityW<::VROSC::HighlightControllerComponents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TouchableObjectsController>& VROSC::ControllerHintBehaviour::__cordl_internal_get__touchables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchables;
}
constexpr ::UnityW<::VROSC::TouchableObjectsController> const& VROSC::ControllerHintBehaviour::__cordl_internal_get__touchables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchables;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set__touchables(::UnityW<::VROSC::TouchableObjectsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____touchables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::HighlightControllerComponents_Component& VROSC::ControllerHintBehaviour::__cordl_internal_get_component()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___component;
}
constexpr ::VROSC::HighlightControllerComponents_Component const& VROSC::ControllerHintBehaviour::__cordl_internal_get_component() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___component;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set_component(::VROSC::HighlightControllerComponents_Component  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___component = value;
}
constexpr float_t& VROSC::ControllerHintBehaviour::__cordl_internal_get_Visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Visible;
}
constexpr float_t const& VROSC::ControllerHintBehaviour::__cordl_internal_get_Visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Visible;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set_Visible(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Visible = value;
}
constexpr ::UnityEngine::Color& VROSC::ControllerHintBehaviour::__cordl_internal_get_FromColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FromColor;
}
constexpr ::UnityEngine::Color const& VROSC::ControllerHintBehaviour::__cordl_internal_get_FromColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FromColor;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set_FromColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FromColor = value;
}
constexpr ::UnityEngine::Color& VROSC::ControllerHintBehaviour::__cordl_internal_get_ToColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToColor;
}
constexpr ::UnityEngine::Color const& VROSC::ControllerHintBehaviour::__cordl_internal_get_ToColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToColor;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set_ToColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToColor = value;
}
constexpr ::VROSC::NoteBoard_PlayAxis& VROSC::ControllerHintBehaviour::__cordl_internal_get_Axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis;
}
constexpr ::VROSC::NoteBoard_PlayAxis const& VROSC::ControllerHintBehaviour::__cordl_internal_get_Axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set_Axis(::VROSC::NoteBoard_PlayAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Axis = value;
}
constexpr bool& VROSC::ControllerHintBehaviour::__cordl_internal_get_UpdateAllTouchables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateAllTouchables;
}
constexpr bool const& VROSC::ControllerHintBehaviour::__cordl_internal_get_UpdateAllTouchables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateAllTouchables;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set_UpdateAllTouchables(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateAllTouchables = value;
}
constexpr bool& VROSC::ControllerHintBehaviour::__cordl_internal_get_OnlyHovering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnlyHovering;
}
constexpr bool const& VROSC::ControllerHintBehaviour::__cordl_internal_get_OnlyHovering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnlyHovering;
}
constexpr void VROSC::ControllerHintBehaviour::__cordl_internal_set_OnlyHovering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnlyHovering = value;
}
inline void VROSC::ControllerHintBehaviour::Setup(::VROSC::HighlightControllerComponents*  highlight, ::VROSC::TouchableObjectsController*  touchables)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TouchableObjectsController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, highlight, touchables);
}
inline void VROSC::ControllerHintBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::ControllerHintBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ControllerHintBehaviour* VROSC::ControllerHintBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ControllerHintBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::ControllerHintBehaviour::ControllerHintBehaviour()   {
}
