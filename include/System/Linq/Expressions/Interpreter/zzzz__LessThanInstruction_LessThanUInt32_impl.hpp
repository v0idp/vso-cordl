#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LessThanInstruction_LessThanUInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanInstruction_LessThanUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LessThanInstruction_LessThanUInt32._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LessThanInstruction_LessThanUInt32::*)(::System::Object*)>(&::GlobalNamespace::LessThanInstruction_LessThanUInt32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29cfd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanInstruction_LessThanUInt32*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LessThanInstruction_LessThanUInt32.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LessThanInstruction_LessThanUInt32::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::LessThanInstruction_LessThanUInt32::Run)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29d03f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanInstruction_LessThanUInt32*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanInstruction_LessThanUInt32*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LessThanInstruction_LessThanUInt32::_ctor(::System::Object*  nullValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanInstruction_LessThanUInt32*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nullValue);
}
inline int32_t GlobalNamespace::LessThanInstruction_LessThanUInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LessThanInstruction_LessThanUInt32*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::LessThanInstruction_LessThanUInt32* GlobalNamespace::LessThanInstruction_LessThanUInt32::New_ctor(::System::Object*  nullValue)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LessThanInstruction_LessThanUInt32*>(nullValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LessThanInstruction_LessThanUInt32::LessThanInstruction_LessThanUInt32()   {
}
