#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/EnumerableConverter.hpp"
#include "Firebase/Firestore/Converters/zzzz__EnumerableConverterBase_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__EnumerableConverter_def.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::EnumerableConverter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::EnumerableConverter::*)(::System::Type*)>(&::Firebase::Firestore::Converters::EnumerableConverter::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x1911dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumerableConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::EnumerableConverter.DeserializeArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Firebase::Firestore::Converters::EnumerableConverter::*)(::Firebase::Firestore::DeserializationContext*, ::Firebase::Firestore::FieldValueProxy*)>(&::Firebase::Firestore::Converters::EnumerableConverter::DeserializeArray)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x1912004;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumerableConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumerableConverter*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::EnumerableConverter._EnumerableConverter_m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Firebase::Firestore::Converters::EnumerableConverter::_EnumerableConverter_m__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x19124a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumerableConverter*>::get(),
                        "<EnumerableConverter>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Firebase::Firestore::Converters::EnumerableConverter::__cordl_internal_get__elementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementType;
}
constexpr ::System::Type* const& Firebase::Firestore::Converters::EnumerableConverter::__cordl_internal_get__elementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementType;
}
constexpr void Firebase::Firestore::Converters::EnumerableConverter::__cordl_internal_set__elementType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::Converters::EnumerableConverter::setStaticF___f__am$cache0(::System::Func_2<::System::Type*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Type*,bool>*, "<>f__am$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumerableConverter*>::get>(std::forward<::System::Func_2<::System::Type*,bool>*>(value));
}
inline ::System::Func_2<::System::Type*,bool>* Firebase::Firestore::Converters::EnumerableConverter::getStaticF___f__am$cache0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*,bool>*, "<>f__am$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumerableConverter*>::get>();
}
inline void Firebase::Firestore::Converters::EnumerableConverter::_ctor(::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumerableConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetType);
}
inline ::System::Object* Firebase::Firestore::Converters::EnumerableConverter::DeserializeArray(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  arrayValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumerableConverter*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, arrayValue);
}
inline bool Firebase::Firestore::Converters::EnumerableConverter::_EnumerableConverter_m__0(::System::Type*  iface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumerableConverter*>::get(),
                        "<EnumerableConverter>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, iface);
}
inline ::Firebase::Firestore::Converters::EnumerableConverter* Firebase::Firestore::Converters::EnumerableConverter::New_ctor(::System::Type*  targetType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::EnumerableConverter*>(targetType));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::EnumerableConverter::EnumerableConverter()   {
}
