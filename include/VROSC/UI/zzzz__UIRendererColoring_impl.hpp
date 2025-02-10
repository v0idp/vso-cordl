#pragma once
// IWYU pragma private; include "VROSC/UI/UIRendererColoring.hpp"
#include "VROSC/UI/zzzz__UIInteractableColoring_impl.hpp"
#include "VROSC/UI/zzzz__UIRendererColoring_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::VROSC::UI::UIRendererColoring.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIRendererColoring::*)()>(&::VROSC::UI::UIRendererColoring::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17e5cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIRendererColoring.UpdateColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIRendererColoring::*)()>(&::VROSC::UI::UIRendererColoring::UpdateColor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x17e5d24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIRendererColoring.OnValidate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIRendererColoring::*)()>(&::VROSC::UI::UIRendererColoring::OnValidate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x17e5ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                        "OnValidate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIRendererColoring.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIRendererColoring::*)()>(&::VROSC::UI::UIRendererColoring::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17e605c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIRendererColoring._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIRendererColoring::*)()>(&::VROSC::UI::UIRendererColoring::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17e6084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& VROSC::UI::UIRendererColoring::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& VROSC::UI::UIRendererColoring::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void VROSC::UI::UIRendererColoring::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::UI::UIRendererColoring::__cordl_internal_get__hideWhenNotHovering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideWhenNotHovering;
}
constexpr bool const& VROSC::UI::UIRendererColoring::__cordl_internal_get__hideWhenNotHovering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideWhenNotHovering;
}
constexpr void VROSC::UI::UIRendererColoring::__cordl_internal_set__hideWhenNotHovering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideWhenNotHovering = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& VROSC::UI::UIRendererColoring::__cordl_internal_get__materialBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& VROSC::UI::UIRendererColoring::__cordl_internal_get__materialBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialBlock;
}
constexpr void VROSC::UI::UIRendererColoring::__cordl_internal_set__materialBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UI::UIRendererColoring::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::UIRendererColoring::UpdateColor()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::UIRendererColoring::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                        "OnValidate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::UIRendererColoring::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::UIRendererColoring::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIRendererColoring*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::UIRendererColoring* VROSC::UI::UIRendererColoring::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UIRendererColoring*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::UIRendererColoring::UIRendererColoring()   {
}
