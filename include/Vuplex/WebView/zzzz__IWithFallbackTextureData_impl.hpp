#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithFallbackTextureData.hpp"
#include "Vuplex/WebView/zzzz__IWithFallbackTextureData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::IWithFallbackTextureData.GetFallbackTextureData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* (::Vuplex::WebView::IWithFallbackTextureData::*)()>(&::Vuplex::WebView::IWithFallbackTextureData::GetFallbackTextureData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithFallbackTextureData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithFallbackTextureData*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* Vuplex::WebView::IWithFallbackTextureData::GetFallbackTextureData()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::IWithFallbackTextureData*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
