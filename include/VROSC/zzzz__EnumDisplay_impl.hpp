#pragma once
// IWYU pragma private; include "VROSC/EnumDisplay.hpp"
#include "VROSC/zzzz__TextDisplay_impl.hpp"
#include "VROSC/zzzz__EnumDisplay_def.hpp"
#include "VROSC/zzzz__EnumDisplay_def.hpp"
#include "VROSC/zzzz__IntNode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::EnumDisplay_DisplayEnum::EnumDisplay_DisplayEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::EnumDisplay_DisplayEnum::EnumDisplay_DisplayEnum()   {
}
constexpr ::VROSC::EnumDisplay_DisplayEnum  VROSC::EnumDisplay_DisplayEnum::PlayBehaviour{static_cast<int32_t>(0x0)};
constexpr ::VROSC::EnumDisplay_DisplayEnum  VROSC::EnumDisplay_DisplayEnum::Note{static_cast<int32_t>(0x1)};
constexpr ::VROSC::EnumDisplay_DisplayEnum  VROSC::EnumDisplay_DisplayEnum::Quantize{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::EnumDisplay.InitDisplay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnumDisplay::*)()>(&::VROSC::EnumDisplay::InitDisplay)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1725c54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnumDisplay*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnumDisplay*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnumDisplay.UpdateDisplayEnum
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnumDisplay::*)(int32_t)>(&::VROSC::EnumDisplay::UpdateDisplayEnum)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1725d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnumDisplay*>::get(),
                        "UpdateDisplayEnum",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnumDisplay.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnumDisplay::*)()>(&::VROSC::EnumDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1725ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnumDisplay*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnumDisplay._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnumDisplay::*)()>(&::VROSC::EnumDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1725fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnumDisplay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::IntNode>& VROSC::EnumDisplay::__cordl_internal_get__intNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intNode;
}
constexpr ::UnityW<::VROSC::IntNode> const& VROSC::EnumDisplay::__cordl_internal_get__intNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intNode;
}
constexpr void VROSC::EnumDisplay::__cordl_internal_set__intNode(::UnityW<::VROSC::IntNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::EnumDisplay_DisplayEnum& VROSC::EnumDisplay::__cordl_internal_get__displayEnum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayEnum;
}
constexpr ::VROSC::EnumDisplay_DisplayEnum const& VROSC::EnumDisplay::__cordl_internal_get__displayEnum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayEnum;
}
constexpr void VROSC::EnumDisplay::__cordl_internal_set__displayEnum(::VROSC::EnumDisplay_DisplayEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayEnum = value;
}
inline void VROSC::EnumDisplay::InitDisplay()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnumDisplay*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EnumDisplay::UpdateDisplayEnum(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnumDisplay*>::get(),
                        "UpdateDisplayEnum",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::EnumDisplay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnumDisplay*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EnumDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnumDisplay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::EnumDisplay* VROSC::EnumDisplay::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::EnumDisplay*>());
}
// Ctor Parameters []
constexpr ::VROSC::EnumDisplay::EnumDisplay()   {
}
