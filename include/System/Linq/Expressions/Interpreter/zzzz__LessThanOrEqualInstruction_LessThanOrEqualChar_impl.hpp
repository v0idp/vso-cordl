#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LessThanOrEqualInstruction_LessThanOrEqualChar.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_LessThanOrEqualChar_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar::*)(::System::Object*)>(&::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29d0840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar::Run)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29d0b60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar::_ctor(::System::Object*  nullValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nullValue);
}
inline int32_t GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar* GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar::New_ctor(::System::Object*  nullValue)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar*>(nullValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualChar::LessThanOrEqualInstruction_LessThanOrEqualChar()   {
}
