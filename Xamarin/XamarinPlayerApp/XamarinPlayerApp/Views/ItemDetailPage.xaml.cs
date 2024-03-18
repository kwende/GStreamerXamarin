using System.ComponentModel;
using Xamarin.Forms;
using XamarinPlayerApp.ViewModels;

namespace XamarinPlayerApp.Views
{
    public partial class ItemDetailPage : ContentPage
    {
        public ItemDetailPage()
        {
            InitializeComponent();
            BindingContext = new ItemDetailViewModel();
        }
    }
}