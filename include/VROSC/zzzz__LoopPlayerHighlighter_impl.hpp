#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerHighlighter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopPlayerHighlighter_def.hpp"
#include "VROSC/UI/zzzz__UIAdjustableMeshColoring_def.hpp"
#include "VROSC/UI/zzzz__UIColorGetter_def.hpp"
//  Writing Method size for method: ::VROSC::LoopPlayerHighlighter.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerHighlighter::*)()>(&::VROSC::LoopPlayerHighlighter::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18a18fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerHighlighter*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerHighlighter.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerHighlighter::*)()>(&::VROSC::LoopPlayerHighlighter::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a191c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerHighlighter*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerHighlighter.Highlight
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerHighlighter::*)(bool)>(&::VROSC::LoopPlayerHighlighter::Highlight)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18a1924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerHighlighter*>::get(),
                        "Highlight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerHighlighter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerHighlighter::*)()>(&::VROSC::LoopPlayerHighlighter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a1958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerHighlighter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UI::UIColorGetter>& VROSC::LoopPlayerHighlighter::__cordl_internal_get__highlightColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightColor;
}
constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& VROSC::LoopPlayerHighlighter::__cordl_internal_get__highlightColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightColor;
}
constexpr void VROSC::LoopPlayerHighlighter::__cordl_internal_set__highlightColor(::UnityW<::VROSC::UI::UIColorGetter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>& VROSC::LoopPlayerHighlighter::__cordl_internal_get__highlightingObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightingObject;
}
constexpr ::UnityW<::VROSC::UI::UIAdjustableMeshColoring> const& VROSC::LoopPlayerHighlighter::__cordl_internal_get__highlightingObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightingObject;
}
constexpr void VROSC::LoopPlayerHighlighter::__cordl_internal_set__highlightingObject(::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightingObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UI::UIColorGetter>& VROSC::LoopPlayerHighlighter::__cordl_internal_get__highlightingObjectDefaultGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightingObjectDefaultGetter;
}
constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& VROSC::LoopPlayerHighlighter::__cordl_internal_get__highlightingObjectDefaultGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightingObjectDefaultGetter;
}
constexpr void VROSC::LoopPlayerHighlighter::__cordl_internal_set__highlightingObjectDefaultGetter(::UnityW<::VROSC::UI::UIColorGetter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightingObjectDefaultGetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopPlayerHighlighter::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerHighlighter*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerHighlighter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerHighlighter*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerHighlighter::Highlight(bool  highlight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerHighlighter*>::get(),
                        "Highlight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, highlight);
}
inline void VROSC::LoopPlayerHighlighter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerHighlighter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayerHighlighter* VROSC::LoopPlayerHighlighter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayerHighlighter*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerHighlighter::LoopPlayerHighlighter()   {
}
