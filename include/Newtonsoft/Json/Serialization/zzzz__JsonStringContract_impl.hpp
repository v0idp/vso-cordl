#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonStringContract.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonStringContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonStringContract._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonStringContract::*)(::System::Type*)>(&::Newtonsoft::Json::Serialization::JsonStringContract::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x281b604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonStringContract*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::JsonStringContract::_ctor(::System::Type*  underlyingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonStringContract*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, underlyingType);
}
inline ::Newtonsoft::Json::Serialization::JsonStringContract* Newtonsoft::Json::Serialization::JsonStringContract::New_ctor(::System::Type*  underlyingType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonStringContract*>(underlyingType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonStringContract::JsonStringContract()   {
}
