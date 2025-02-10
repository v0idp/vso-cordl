#pragma once
// IWYU pragma private; include "VROSC/DisplayTooltipOnController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_impl.hpp"
#include "VROSC/zzzz__DisplayTooltipOnController_def.hpp"
#include "VROSC/zzzz__ControllerInputNode_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
//  Writing Method size for method: ::VROSC::DisplayTooltipOnController.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DisplayTooltipOnController::*)()>(&::VROSC::DisplayTooltipOnController::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1733eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DisplayTooltipOnController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DisplayTooltipOnController::*)()>(&::VROSC::DisplayTooltipOnController::Setup)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1733f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DisplayTooltipOnController.HoverStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DisplayTooltipOnController::*)(::VROSC::InputDevice*)>(&::VROSC::DisplayTooltipOnController::HoverStart)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1734094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        "HoverStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DisplayTooltipOnController.HoverEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DisplayTooltipOnController::*)(::VROSC::InputDevice*)>(&::VROSC::DisplayTooltipOnController::HoverEnd)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1734168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        "HoverEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DisplayTooltipOnController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DisplayTooltipOnController::*)()>(&::VROSC::DisplayTooltipOnController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17341b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::HighlightControllerComponents_Component& VROSC::DisplayTooltipOnController::__cordl_internal_get__component()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____component;
}
constexpr ::VROSC::HighlightControllerComponents_Component const& VROSC::DisplayTooltipOnController::__cordl_internal_get__component() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____component;
}
constexpr void VROSC::DisplayTooltipOnController::__cordl_internal_set__component(::VROSC::HighlightControllerComponents_Component  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____component = value;
}
constexpr ::UnityW<::VROSC::ControllerInputNode>& VROSC::DisplayTooltipOnController::__cordl_internal_get__controllerInputNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerInputNode;
}
constexpr ::UnityW<::VROSC::ControllerInputNode> const& VROSC::DisplayTooltipOnController::__cordl_internal_get__controllerInputNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerInputNode;
}
constexpr void VROSC::DisplayTooltipOnController::__cordl_internal_set__controllerInputNode(::UnityW<::VROSC::ControllerInputNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllerInputNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::DisplayTooltipOnController::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::StringW const& VROSC::DisplayTooltipOnController::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void VROSC::DisplayTooltipOnController::__cordl_internal_set__text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TooltipData*& VROSC::DisplayTooltipOnController::__cordl_internal_get__tooltipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipData;
}
constexpr ::VROSC::TooltipData* const& VROSC::DisplayTooltipOnController::__cordl_internal_get__tooltipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipData;
}
constexpr void VROSC::DisplayTooltipOnController::__cordl_internal_set__tooltipData(::VROSC::TooltipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tooltipData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::DisplayTooltipOnController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DisplayTooltipOnController::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::DisplayTooltipOnController::HoverStart(::VROSC::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        "HoverStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void VROSC::DisplayTooltipOnController::HoverEnd(::VROSC::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        "HoverEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void VROSC::DisplayTooltipOnController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisplayTooltipOnController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DisplayTooltipOnController* VROSC::DisplayTooltipOnController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DisplayTooltipOnController*>());
}
// Ctor Parameters []
constexpr ::VROSC::DisplayTooltipOnController::DisplayTooltipOnController()   {
}
