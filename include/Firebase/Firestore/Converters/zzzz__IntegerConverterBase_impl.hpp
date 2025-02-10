#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/IntegerConverterBase.hpp"
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__IntegerConverterBase_def.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::IntegerConverterBase._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::IntegerConverterBase::*)(::System::Type*)>(&::Firebase::Firestore::Converters::IntegerConverterBase::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x190f1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::IntegerConverterBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::IntegerConverterBase.DeserializeDouble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Firebase::Firestore::Converters::IntegerConverterBase::*)(::Firebase::Firestore::DeserializationContext*, double_t)>(&::Firebase::Firestore::Converters::IntegerConverterBase::DeserializeDouble)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x190f200;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::IntegerConverterBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::IntegerConverterBase*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::Converters::IntegerConverterBase::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::IntegerConverterBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::System::Object* Firebase::Firestore::Converters::IntegerConverterBase::DeserializeDouble(::Firebase::Firestore::DeserializationContext*  context, double_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::IntegerConverterBase*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, value);
}
inline ::Firebase::Firestore::Converters::IntegerConverterBase* Firebase::Firestore::Converters::IntegerConverterBase::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::IntegerConverterBase*>(type));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::IntegerConverterBase::IntegerConverterBase()   {
}
