#pragma once
// IWYU pragma private; include "VROSC/WidgetHoveringNode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__WidgetHoveringNode_def.hpp"
#include "VROSC/zzzz__Interactable_def.hpp"
#include "VROSC/zzzz__WidgetHoveringController_def.hpp"
//  Writing Method size for method: ::VROSC::WidgetHoveringNode.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetHoveringNode::*)()>(&::VROSC::WidgetHoveringNode::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x173d128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetHoveringNode.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetHoveringNode::*)()>(&::VROSC::WidgetHoveringNode::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x173d238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetHoveringNode.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetHoveringNode::*)(::VROSC::WidgetHoveringController*)>(&::VROSC::WidgetHoveringNode::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173d348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetHoveringController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetHoveringNode.SetHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetHoveringNode::*)(bool)>(&::VROSC::WidgetHoveringNode::SetHovering)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x173d350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WidgetHoveringNode._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WidgetHoveringNode::*)()>(&::VROSC::WidgetHoveringNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x173d3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::WidgetHoveringController>& VROSC::WidgetHoveringNode::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::UnityW<::VROSC::WidgetHoveringController> const& VROSC::WidgetHoveringNode::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void VROSC::WidgetHoveringNode::__cordl_internal_set__parent(::UnityW<::VROSC::WidgetHoveringController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::Interactable>& VROSC::WidgetHoveringNode::__cordl_internal_get__reactTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactTo;
}
constexpr ::UnityW<::VROSC::Interactable> const& VROSC::WidgetHoveringNode::__cordl_internal_get__reactTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactTo;
}
constexpr void VROSC::WidgetHoveringNode::__cordl_internal_set__reactTo(::UnityW<::VROSC::Interactable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reactTo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::WidgetHoveringNode::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WidgetHoveringNode::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WidgetHoveringNode::Setup(::VROSC::WidgetHoveringController*  parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetHoveringController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent);
}
inline void VROSC::WidgetHoveringNode::SetHovering(bool  hovering)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hovering);
}
inline void VROSC::WidgetHoveringNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WidgetHoveringNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::WidgetHoveringNode* VROSC::WidgetHoveringNode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::WidgetHoveringNode*>());
}
// Ctor Parameters []
constexpr ::VROSC::WidgetHoveringNode::WidgetHoveringNode()   {
}
