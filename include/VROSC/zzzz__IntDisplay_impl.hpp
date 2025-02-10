#pragma once
// IWYU pragma private; include "VROSC/IntDisplay.hpp"
#include "VROSC/zzzz__TextDisplay_impl.hpp"
#include "VROSC/zzzz__IntDisplay_def.hpp"
#include "VROSC/zzzz__IntNode_def.hpp"
//  Writing Method size for method: ::VROSC::IntDisplay.InitDisplay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntDisplay::*)()>(&::VROSC::IntDisplay::InitDisplay)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1725fcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntDisplay*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntDisplay*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntDisplay.UpdateDisplayInt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntDisplay::*)(int32_t)>(&::VROSC::IntDisplay::UpdateDisplayInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17260dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntDisplay*>::get(),
                        "UpdateDisplayInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntDisplay._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntDisplay::*)()>(&::VROSC::IntDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1726110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntDisplay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::IntNode>& VROSC::IntDisplay::__cordl_internal_get__intNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intNode;
}
constexpr ::UnityW<::VROSC::IntNode> const& VROSC::IntDisplay::__cordl_internal_get__intNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intNode;
}
constexpr void VROSC::IntDisplay::__cordl_internal_set__intNode(::UnityW<::VROSC::IntNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::IntDisplay::InitDisplay()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntDisplay*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::IntDisplay::UpdateDisplayInt(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntDisplay*>::get(),
                        "UpdateDisplayInt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::IntDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntDisplay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::IntDisplay* VROSC::IntDisplay::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IntDisplay*>());
}
// Ctor Parameters []
constexpr ::VROSC::IntDisplay::IntDisplay()   {
}
