#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NumericConvertInstruction_ToUnderlying.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_ToUnderlying_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_ToUnderlying.get_InstructionName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::NumericConvertInstruction_ToUnderlying::*)()>(&::GlobalNamespace::NumericConvertInstruction_ToUnderlying::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29ed9f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_ToUnderlying._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NumericConvertInstruction_ToUnderlying::*)(::System::TypeCode, bool)>(&::GlobalNamespace::NumericConvertInstruction_ToUnderlying::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29eda34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_ToUnderlying.Convert
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::NumericConvertInstruction_ToUnderlying::*)(::System::Object*)>(&::GlobalNamespace::NumericConvertInstruction_ToUnderlying::Convert)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x29eda64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::NumericConvertInstruction_ToUnderlying::get_InstructionName()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::NumericConvertInstruction_ToUnderlying::_ctor(::System::TypeCode  to, bool  isLiftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, to, isLiftedToNull);
}
inline ::System::Object* GlobalNamespace::NumericConvertInstruction_ToUnderlying::Convert(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::NumericConvertInstruction_ToUnderlying* GlobalNamespace::NumericConvertInstruction_ToUnderlying::New_ctor(::System::TypeCode  to, bool  isLiftedToNull)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(to, isLiftedToNull));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NumericConvertInstruction_ToUnderlying::NumericConvertInstruction_ToUnderlying()   {
}
